#include <iostream> 
#include <string.h> 
#include <vector>

//Una función ejecuta un código y nos permite tener código reutilizable 
//además tienen un contexto propio que podemos o no acceder a el  

//Funciones que imprimen en consola  

//void Saludo() {
//	std::cout << " Hola que tal Manuel "<<std::endl;
//} 

//Funciones que imprimen en consola con paso de parametros  

//void SaludoPersonalizado(std::string nombre,int edad) {
//	std::cout << " Hola que tal mi nombre es : " << nombre << " y tengo :" << edad<< " anios " <<std::endl;
//}
//Funciones con retorno  

//float CalcularDistancia3D(float Xenemy, float Yenemy, float Zenemy, float Xplayer, float Yplayer, float Zplayer) {
//	float distance = sqrtf(pow(Xplayer - Xenemy, 2) + pow(Yplayer - Yenemy, 2) + pow(Zplayer - Zenemy, 2));
//	return distance;
//}
//
//
//int main() {
//
//	//Saludo();
//	//SaludoPersonalizado("Juan",20);
//
//	std::cout<< CalcularDistancia3D(45,45,45,200,200,400) << std::endl;
//
//	return 0;
//}

// PASO DE PARAMETROS POR VALOR Y REFERENCIA  

//void ImprimirEmpleados(std::vector<std::string> &empleados) {
//
//	for (int i = 0; i < empleados.size(); i++) {
//		std::cout << empleados[i] << std::endl;
//	}
//}
//
//int main() {
//	std::vector<std::string>trabajadores = { "Juan","Pep","Tao","Nakata" }; 
//	ImprimirEmpleados(trabajadores);
//}

int numero1 = 10; 
int numero2 = 20; 

void MultiplyFunction( int &a,  int &b) { //podrian ser parametros constantes siempre que no cambie su valor dentro

	a = a * 2; 
	b = b * 2; 
	std::cout << "Num1 dentro de la funcion : " << a << std::endl;
	std::cout << "Num2 dentro de la funcion : " << b << std::endl;
}




int main() {
	MultiplyFunction(numero1, numero2); 
	std::cout << "Fuera de la funcion los valores son : " << numero1 << " y " << numero2 << std::endl;
}