#include<iostream> 
#include<thread>
#include<chrono>
#include<windows.h>
#include<stack>
#include<queue>

//PARA CORRUTINAS 
using namespace std::this_thread; 
using namespace std::chrono;
//
//void HolaFunction() {
//	for (int i = 0; i < 40; i++) {
//		std::cout << "  hola  ";
//	}
//}
//
//void AdiosFunction() {
//	for (int i = 0; i < 40; i++) {
//		std::cout << "  Adios  " ;
//	}
//}


//
//void Function1() {
//	for (int i = 0; i < 200; i++) {
//		std::cout << i << std::endl;
//	}
//
//}
//
//void Function2() {
//
//	for (int i = 0; i < 200; i++) {
//		for (int j = 0; j < 200; j++) {
//			std::cout << i << j << std::endl;
//		}
//	}
//}
//
//void Function3() {
//
//	for (int i = 0; i < 200; i++) {
//		for (int j = 0; j < 200; j++) {
//			for (int k = 0; k < 200; k++) {
//				std::cout << i << j << k << std::endl;
//
//			}
//		}
//	}
//}

//
//int main() {
//	//PROGRAMACIÓN MULTI HILO 
//	//// 
//	////Funciones clásicas (la ejecución es secuencial) 
//	///*HolaFunction(); 
//	//AdiosFunction();*/
//
//	////Multihilos 
//
//	//std::thread hilo1(HolaFunction);
//	//std::thread hilo2(AdiosFunction);
//
//	//hilo1.join(); 
//	//hilo2.join();
//
//
//	//CHRONO LIBRERIA  
//
//	//MEDIDA DEL PRIMER ALGORITMO 
//	//auto startFunction1 = std::chrono::system_clock::now(); //tiempo actual 
//	//Function1(); 
//	//auto endFunction1 = std::chrono::system_clock::now(); // tiempo final 
//
//	//std::chrono::duration<float, std::milli>duration = endFunction1 - startFunction1;//diferencia de tiempo en milisegundos 
//
//	//std::cout << duration.count() << "seconds" << std::endl; 
//
//	//MEDIDA DEL SEGUNDO ALGORITMO 
//	//auto startFunction2 = std::chrono::system_clock::now(); //tiempo actual 
//	//Function2();
//	//auto endFunction2 = std::chrono::system_clock::now(); // tiempo final 
//
//	//std::chrono::duration<float, std::milli>duration = endFunction2 - startFunction2;//diferencia de tiempo en milisegundos 
//
//	//std::cout << duration.count() << "seconds" << std::endl;
//
//
//	//MEDIDA DEL SEGUNDO ALGORITMO 
//	//auto startFunction3 = std::chrono::system_clock::now(); //tiempo actual 
//	//Function3();
//	//auto endFunction3 = std::chrono::system_clock::now(); // tiempo final 
//
//	//std::chrono::duration<float, std::milli>duration = endFunction3 - startFunction3;//diferencia de tiempo en milisegundos 
//
//	//std::cout << duration.count() << "seconds" << std::endl;
//
//	
//
//	//CHRONO PARA MANEJAR TAREAS JUNTO CON THREADS (CORRUTINAS ) 
//	//bool timer = true; 
//
//	//int segundos = 0;
//	//int minutos  = 0; 
//	//int horas = 0; 
//
//	//
//
//	//while (timer) {
//	//	segundos++;
//	//	std::cout << horas << " : " << minutos << " : " << segundos << std::endl;
//	//	//std::this_thread::sleep_for(std::chrono::seconds(1));
//	//	Sleep(39);
//	//	system("cls");
//	//
//	//	if (segundos > 59) {
//	//		segundos = 0;
//	//		minutos++;
//	//	} 
//	//	else if (minutos > 59) {
//	//		minutos = 0;
//	//		horas++;
//	//	}
//	//	else if (horas >= 23) {
//	//		horas = 0;
//	//	
//	//	}
//	//
//	//}
//
//
//
//	return 0;
//};



	//PILAS (lifo) ****************************//LIBRERIA STACK 
	//pila de platos  no tienen indices tenemos que recorreralas de otras forams
//  
//std::stack<int>pila;
//int mayor; //vamos a ver cual es el mayor de la pila 
//	
//
//int main() {
//	//agregando elementos 
//	pila.push(34); 
//	pila.push(343); 
//	pila.push(345); 
//
//	mayor = pila.top();
//
//    //voy borrando los elementos de arriba de la pila y 
//	//imprimiendo para que me vaya imprimiendo los platos de abajo 
//	//ya que no podemos recorrerla 
//
//	 //me da el elemento de mas arriba de la pila 
//	; //elimina el ultimo de arriba  
//
//	//std::cout << pila.top() << std::endl; //me da el elemento de mas arriba de la pila 
//	//pila.pop(); //elimina el ultimo de arriba 
//
//	//std::cout << pila.top() << std::endl; //me da el elemento de mas arriba de la pila 
//	//pila.pop(); //elimina el ultimo de arriba 
//
//	////Pero podemos hacerlo mejor y no tenear qu ehacer esto 
//
//	while (pila.size() > 0) { 
//		//RECORRER LA PILA 
//		/*std::cout << pila.top() << std::endl;
//		pila.pop();*/
//		//busco el mayor , si cambio el signo es el menor . 
//		if (pila.top() > mayor) {
//			mayor = pila.top();
//		}
//		pila.pop();
//
//	}
//	std::cout << mayor << std::endl;
//
//	//Encontrar el mayor elemento de la pila 
//
//}
//

//COLAS (FIFO) 
//es una lista podemos compararla con la cola de un banco 

//std::queue<int> cola;
std::priority_queue<int> cola; //la convertimos en una cola de prioridad y me ordena los datos de mayor a menor 

int main() {

	cola.push(34); 
	cola.push(31);
	cola.push(34); 

	//std::cout << cola.front() << std::endl; //leer el primero de la cola 
	//cola.pop(); //borramos  

	//// si lo anterior lo metemos en un while ira borrando y imprimiendo  

	//while (cola.size()> 0) {
	//	std::cout << cola.front() << std::endl;
	//	cola.pop();
	//}

	//si utilizamos coal de prioridad usamos top en vez de front 
	// me los ordena de mayor a menor 
	while (cola.size() > 0) {
		std::cout << cola.top() << std::endl;
		cola.pop();
	}



}