#include<iostream>
#include<string.h>

int main() 
{
	char Origen[] = "Hola que tal "; 
	char Destino[34]; 
   
	strcpy(Destino, Origen);

	std::cout << Destino << std::endl;
}