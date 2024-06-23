#include<iostream>




int main()
{
	//1.Declaramos una variable  
	int number = 5; 
	//2.Acceder a la posición de memoria del número 
	std::cout << &number << std::endl;
	//3.Creamos un puntero que apunte a number  
	int* pointer = &number; 
	//4. Si imprimo el puntero sin * veremos que es el valor de la variable  
	std::cout << pointer << std::endl;
	//5 Desreferenciamos el puntero  
	std::cout << *pointer << std::endl;
	//6 Cambiamos el valor del puntero desde la variable  
	*pointer = 18; 
	// 7.Comprobamos que hemos cambiado el valor  
	std::cout << number << std::endl;
	// 8.Comprobamos que hemos cambiado el valor  
	std::cout << *pointer << std::endl;
}