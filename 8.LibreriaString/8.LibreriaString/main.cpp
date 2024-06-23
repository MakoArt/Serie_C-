#include<iostream>
#include<cstring>
#include<cstdio> 



int main() 
{
	//STRCPY(destino,origen) Copia un array y lo lleva a otro  

	/*char origen[] = "Hola que tal "; 
	char destino[14]; 

	strcpy_s(destino, origen); 

	std::cout << destino << std::endl;*/

	//STRLEN(cadena) mide la longitud de una cadena

	/*char frase[] = "Hola que tal estas ...";
	int i = 0; 
	i = strlen(frase);
	std::cout << i << std::endl;*/

	//STRCMP  (cadena1,cadena2) compara dos cadenas y devuelve 0 si son iguales 
	// i 1 si son distintas  

	//char cadena1[] = "Maria";
 //   char cadena2[] = "Pedro";

	//if (strcmp(cadena1, cadena2) == 0) {

	//	std::cout << " Las cadenas son iguales" << std::endl;
	//}
	//else {
	//	std::cout << " Las cadenas son distintas " << std::endl;
	//}

	//STRRCHR (cadena,corte) corta una cadena de texto y nos da la parte izquierda 

	//char letras[] = "ABCDEFGHIKL"; 
	//char corte = 'F'; 

	//std::cout << strrchr(letras, corte) << std::endl;

	 //STRREV invertir una cadena  
    
	/*char cadena[] = "Abracadabraaaaaaa"; 

	std::cout << _strrev(cadena) << std::endl; 

	return 0;*/

	//LIBRERIA STANDARD DE MATEMATICAS  

	float temperature = 34.2f; 
	int height = -34; 
	int number = 9;
	int numberResto = 10; 
	int numberResto2 = 2;


	std::cout << " me ha redondeado 34.2 al mas cercano :" << round(temperature) << std::endl;
	std::cout << " me ha redondeado 34.2 al entero mayor : " << ceil(temperature) << std::endl;
	std::cout << " me ha redondeado 34.2 al entero menor : " << floor(temperature) << std::endl;
	std::cout << " el valor absoluto de -34 es :" << fabs(height) << std::endl;
	std::cout << " la raiz cuadrada de 9 es : " << sqrt(number) << std::endl;
	std::cout << " el resto de la division de 10 / 2 es : " << fmod(numberResto, numberResto) << std::endl;
	std::cout << " el resultado de la potencia de 10 al cuadrado es : " << pow(10, 2) << std::endl; 

	
	return 0;
}