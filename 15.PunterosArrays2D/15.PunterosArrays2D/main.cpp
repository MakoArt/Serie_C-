#include <iostream> 



int main() {

	int filas = 100; 
	int columnas = 100; 

	int** multi = new int* [filas]; 
	for (int i = 0; i < filas; i++) {
		multi[i] = new int[columnas];
	}

	multi[6][7] = 400; 
	multi[23][34] = 500; 

	std::cout << "En la posicion 6 7 se ha guardado un : " << multi[6][7] << std::endl;
	std::cout << "En la posicion 23 34 se ha guardado un : " << multi[23][34] << std::endl;

	for (int i = 0; i < filas; i++) {
		delete[] multi[i];
		multi[i] = nullptr;
	}

	delete[]multi; 
	multi = nullptr;

	return 0;

}