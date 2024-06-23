#include<iostream>
#include<windows.h> //colores en consola 
#include<stdio.h> //numeros aleatios 
#include<time.h> //numeros aleatorios 
#define color SetConsoleTextAttribute; 




int main() {

	////COLORES  

	////Cambiar fondo y texto de las palabras  
 //    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_GREEN);


	// //Cambiamos con system  

	// system("color c9");


	 ////TODO EL FONDO  0 negro , 1 azul ,2 verde , 3 cielo ,4 rojo ,5 morado , 6 amarillo,7 blanco hueso,
////8 gris , 9 celeste , a verde claro , b celeste claro , c rojo fuerte , d morado oscuro , e color crema , 
//// f blanco puro 


     ////1tb is 1024 gb 
	////1gb or gigabyte 
	////1gb is 1024 megabytes or mb 
	////1 megabyte is 1024 kilobyte or kb 
	////1 kb is 1024 bytes 
	////1 byte is 8 bits  
	////1 bit is 1 that either 0 or 1 

	 //NUMEROS ALEATORIOS 


	srand(static_cast<unsigned int>(time(nullptr)));

	//Desde el 0 hasta el infinito  

	//std::cout << rand() << std::endl;

	//Desde el 0 hasta un numero en particular  tenemos que poner uno mas de el que queremos 

	//std::cout << rand() % 21 << std::endl;

    //Numero aleatorio entre un rango de números  

	int menor = 0; 
	int mayor = 16; 

	int resultadoRandom = menor + rand() % (mayor - menor) + 1;

	std::cout << "Numero aleatio entre 4 y 14 es : " << resultadoRandom << std::endl;


	if (resultadoRandom == 0)system("color 01");
	if (resultadoRandom == 1)system("color 10");
	if (resultadoRandom == 2)system("color 21");
	if (resultadoRandom == 3)system("color 31");
	if (resultadoRandom == 4)system("color 41");
	if (resultadoRandom == 5)system("color 51");
	if (resultadoRandom == 6)system("color 61");
	if (resultadoRandom == 7)system("color 71");
	if (resultadoRandom == 8)system("color 81");
	if (resultadoRandom == 9)system("color 91");
	if (resultadoRandom == 10)system("color a1");
	if (resultadoRandom == 11)system("color b1");
	if (resultadoRandom == 12)system("color c1");
	if (resultadoRandom == 13)system("color d1");
	if (resultadoRandom == 14)system("color e1");
	if (resultadoRandom == 15)system("color f1");



	return 0;


}