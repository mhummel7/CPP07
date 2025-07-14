/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:15:58 by mhummel           #+#    #+#             */
/*   Updated: 2025/07/14 11:49:32 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T& min(T& a, T& b) {
	return (a < b) ? a : b;
}

template <typename T>
T& max(T& a, T& b) {
	return (a > b) ? a : b;
}

#endif
