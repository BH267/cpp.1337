#pragma once

#include <stdint.h>
#include "Data.hpp"
#include <iostream>


class Serializer{

	Serializer();
	Serializer(const Serializer &);
	Serializer &operator=(const Serializer &);
	~Serializer();
public:
	
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

};
