#pragma once

#include <cstddef>


template <typename T>
void	iter(T* ptr, const size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++) {
		f(ptr[i]);
	}
}

template <typename T>
void	iter(T* ptr, const size_t size, void (*f)(const T&))
{
	for (size_t i = 0; i < size; i++) {
		f(ptr[i]);
	}
}
