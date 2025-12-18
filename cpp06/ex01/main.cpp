#include "Data.hpp"
#include "Serializer.hpp"
#include <stdint.h>
#include <iostream>

int main () {

	Data	data;
	data.i = 1337;
	data.p = NULL;

	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "raw: " << raw << std::endl;
	std::cout << "data: " << Serializer::deserialize(raw)->i << std::endl;

	

	return 0;
}
