#include <iostream>
#include <string>

class Animal {

public:

    std::string especie;
    int edad;

    
    Animal(const std::string& e, int a) : especie(e), edad(a) {}

    
    void MostrarInfo() {
        std::cout << "Especie: " << especie << ", Edad: " << edad << " años" << std::endl;
    }
};

int main() {
    
    Animal* miAnimal = new Animal("Leon", 3);

    miAnimal->MostrarInfo();

    delete miAnimal;
    miAnimal = nullptr;

    return 0;
}