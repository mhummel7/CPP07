/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:25:46 by mhummel           #+#    #+#             */
/*   Updated: 2025/07/30 10:11:21 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef> // for size_t
#include <exception>

template <typename T>
class Array {
private:
	T* _array;
	size_t _size;

public:
	Array() : _array(NULL), _size(0) {}

	Array(unsigned int n) : _array(new T[n]()), _size(n) {}

	Array(const Array& other) : _array(new T[other._size]), _size(other._size) {
		for (size_t i = 0; i < _size; ++i) {
			_array[i] = other._array[i];
		}
	}

	~Array() {
		delete[] _array;
	}

	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] _array;
			_array = new T[other._size];
			_size = other._size;
			for (size_t i = 0; i < _size; ++i) {
				_array[i] = other._array[i];
			}
		}
		return *this;
	}

	T& operator[](size_t i) {
		if (i >= _size) {
			throw std::exception();
		}
		return _array[i];
	}

	const T& operator[](size_t i) const {
		if (i >= _size) {
			throw std::exception();
		}
		return _array[i];
	}

	size_t size() const {
		return _size;
	}
};

#endif
