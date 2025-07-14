/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:21:00 by mhummel           #+#    #+#             */
/*   Updated: 2025/07/14 11:49:35 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void print(const T& x) {
	std::cout << x << std::endl;
}

template <typename T>
void increment(T& x) {
	++x;
}

void appendExcl(std::string& s) {
	s += "!";
}

int main() {
	std::cout << "Testing with int array (non-const):" << std::endl;
	int arr[] = {1, 2, 3, 4};
	iter(arr, 4, print<int>);
	std::cout << "After increment:" << std::endl;
	iter(arr, 4, increment<int>);
	iter(arr, 4, print<int>);

	std::cout << "\nTesting with const int array:" << std::endl;
	const int carr[] = {10, 20};
	iter(carr, 2, print<const int>);
	// iter(carr, 2, increment<const int>); // Would not compile, as expected

	std::cout << "\nTesting with string array (non-const):" << std::endl;
	std::string sarr[] = {"hello", "world"};
	iter(sarr, 2, print<std::string>);
	std::cout << "After appending '!':" << std::endl;
	iter(sarr, 2, appendExcl);
	iter(sarr, 2, print<std::string>);

	std::cout << "\nTesting with const string array:" << std::endl;
	const std::string csarr[] = {"foo", "bar"};
	iter(csarr, 2, print<const std::string>);
	// iter(csarr, 2, appendExcl); // Would not compile, as expected

	return 0;
}
