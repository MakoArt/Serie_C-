#include<iostream>

enum DataType {
	_String, 
	_Int, 
	_Float
};


void PrintNumbers(void* ptr, DataType dataType) 
{
	switch (dataType) {
	case _String: 
		std::cout << *((std::string*)ptr) << std::endl;
		break; 
	case _Float: 
		std::cout << *((float*)ptr) << std::endl;
		break;
	case _Int: 
		std::cout << *((int*)ptr) << std::endl;
		break;
	default: 
		std::cout << "Tienes que pasar un tipo de dato : " << std::endl;
		break;
	}
}

int main() {
	int number = 5; 

	PrintNumbers(&number, _Int);


	return 0;
}