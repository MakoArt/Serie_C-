#include<iostream>



//Errores tipicos y muy malos debordamientod el buffer 
//y memory leaks 
int main() 
{
	int numbers[8] = { 2,456,44,56,555,45,66,88 }; 
	//imprimimos el nombres del array 
	std::cout << numbers << std::endl;
	//imprimimos el index 0 como primer elemento 
	std::cout << &numbers[0] << std::endl;
	//vemos el segundo elemento del array 
	std::cout << &numbers[1] << std::endl;
	//Aritmetica de punteros 
	std::cout << *(numbers + 1) << std::endl;
	//Cuidado de no salirnos 
	for (int i = 0; i < 8; i++) 
	{
		std::cout << &numbers[i] << std::endl;
	}
}