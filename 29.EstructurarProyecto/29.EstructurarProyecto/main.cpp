#include "Operaciones.h"
#include <iostream>



int main() {
	
	Operaciones * operaciones= new Operaciones(6,6);

	operaciones->SetOperation(20, 20);
	std::cout << operaciones->GetOperation() << std::endl;

	delete operaciones; 
	operaciones = nullptr;

}