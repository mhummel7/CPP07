/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:21:13 by mhummel           #+#    #+#             */
/*   Updated: 2025/08/04 10:25:11 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef> // for size_t

template <typename T>
void iter(T* array, std::size_t length, void (*f)(T&)) {
	for (std::size_t i = 0; i < length; ++i) {
		f(array[i]);
	}
}

template <typename T>
void iter(const T* array, std::size_t length, void (*f)(const T&)) {
	for (std::size_t i = 0; i < length; ++i) {
		f(array[i]);
	}
}
#endif
