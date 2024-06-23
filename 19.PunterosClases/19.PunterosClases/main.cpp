#include<iostream>



class Animal {
	
public: 

	std::string especie; 
	int edad; 

	Animal(const std::string& e, int a): especie(e),edad(a){}

	void MostrarInfo() {
		std::cout << "Especie : " << especie << " Edad :" << edad << " anios " << std::endl;
	}

};

int main()
{
	Animal* miAnimal = new Animal("Leon", 3); 
	miAnimal->edad = 10;
	miAnimal->especie = "Reptil";
	miAnimal->MostrarInfo();

	delete miAnimal;
	miAnimal = nullptr;


	return 0;
}
