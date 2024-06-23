#include<iostream>



void Function(int *ptr) { 
	std::cout << "direccion antes " << ptr << std::endl;
	std::cout << " valor dentro " << *ptr << std::endl;
	*ptr = 180; 
	std::cout << "valor despues " << *ptr << std::endl;
	std::cout << "direccion despues " << ptr << std::endl;
}


int main() {
	
	int nuevaVariable = 120; 
	Function(&nuevaVariable); 


	return 0;


}