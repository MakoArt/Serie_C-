#include "Operaciones.h" 
#include <iostream>

Operaciones::Operaciones(int numero1,int numero2) {
	_numero1 = numero1; 
	_numero2 = numero2; 
}

void Operaciones::Saludar() {
	std::cout << "Hola que tal" << std::endl;
}

void Operaciones::SetOperation(int numero1, int numero2) {
	_numero1 = numero1;
	_numero2 = numero2;

}

int Operaciones::GetOperation() {

	return _numero1 * _numero2;
}