#include<iostream> 
#include<thread> 


void HolaFunction() {
	for (int i = 0; i < 40; i++) {
		std::cout << "Hola" << std::endl;
	}
	
}

void AdiosFunction() {
	for (int i = 0; i < 40; i++) {
		std::cout << "Adios" << std::endl;
	}
}


int main() {
	//llamada clasica a funciones 
	/*AdiosFunction();
	HolaFunction();*/

	//Llamada a las funciones con threads 

	std::thread hilo1(HolaFunction);
	std::thread hilo2(AdiosFunction); 

	hilo1.join(); 
	hilo2.join();
}