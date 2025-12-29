#pragma once

#include <cstddef>
#include <stdexcept>


template <typename T>
class Array {
	T* a;
	unsigned int len;
public:
	Array() : a(NULL), len(0) {}
	Array(unsigned int n) : len(n) { len > 0 ? a = new T[n] : a = NULL; }

	Array(const Array &other) : len (other.size()){ 
		if (len > 0) {
			a = new T[len];
			for (size_t i = 0; i < len; i++)
				a[i] = other[i];
		} else
			a = NULL;
	}

	Array &operator=(const Array &other) {
		if (this != &other) {
			delete[] a;
			len = other.size();
			a = new T[len];
			for (size_t i = 0; i < len; i++)
				a[i] = other[i];
		}
		return *this;
	}

	T& operator[](const unsigned int i) {
		if (i >= len || i < 0)
			throw std::out_of_range("this index is out of range");
		return a[i];
	}
	const T& operator[](const unsigned int i) const {
		if (i >= len || i < 0)
			throw std::out_of_range("this index is out of range");
		return a[i];
	}

	~Array() { delete[] a;}
	
	unsigned int	size() const {return len;}
};

