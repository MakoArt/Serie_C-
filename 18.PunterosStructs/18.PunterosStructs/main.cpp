#include <iostream>
#include <string> 


struct Persona {
	std::string nombre; 
	int edad; 

}; 


int main() {

	Persona* persona = new Persona{ "Anastasia", 30 };
	std::cout << " Me llamo " << persona->nombre << " y tengo " << persona->edad << " anios " << std::endl;

	delete persona; 
	persona = nullptr;

	return 0;
}