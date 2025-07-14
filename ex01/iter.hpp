/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:21:13 by mhummel           #+#    #+#             */
/*   Updated: 2025/07/14 11:49:34 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// iter.hpp
#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef> // for size_t

template <typename T, typename F>
void iter(T* array, std::size_t length, F f) {
	for (std::size_t i = 0; i < length; ++i) {
		f(array[i]);
	}
}

#endif
