/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:24:48 by mhummel           #+#    #+#             */
/*   Updated: 2025/07/14 11:49:41 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
	try {
		// Test empty array
		Array<int> empty;
		std::cout << "Empty array size: " << empty.size() << std::endl;

		// Test array with size
		Array<int> arr(5);
		for (size_t i = 0; i < arr.size(); ++i) {
			arr[i] = static_cast<int>(i + 1);
		}
		std::cout << "Array values: ";
		for (size_t i = 0; i < arr.size(); ++i) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;

		// Test copy constructor
		Array<int> copy(arr);
		copy[0] = 100;
		std::cout << "Original after copy modify: " << arr[0] << std::endl;
		std::cout << "Copy after modify: " << copy[0] << std::endl;

		// Test assignment
		Array<int> assign = copy;
		assign[0] = 200;
		std::cout << "Copy after assign modify: " << copy[0] << std::endl;
		std::cout << "Assign after modify: " << assign[0] << std::endl;

		// Test out of bounds
		// std::cout << arr[10] << std::endl; // Should throw

		// Test with strings
		Array<std::string> sarr(3);
		sarr[0] = "hello";
		sarr[1] = "world";
		sarr[2] = "!";
		std::cout << "String array: ";
		for (size_t i = 0; i < sarr.size(); ++i) {
			std::cout << sarr[i] << " ";
		}
		std::cout << std::endl;

		// Test const access
		const Array<int>& const_arr = arr;
		std::cout << "Const access: " << const_arr[0] << std::endl;

	} catch (const std::exception& e) {
		std::cerr << "Exception: out of bounds" << std::endl;
	}

	return 0;
}
