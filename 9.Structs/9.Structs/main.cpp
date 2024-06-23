#include<iostream>


//Es una colección con las caracteristicas que tenemos : 
//-gran facilidad parar ordenar datos 
//-podemos introducir distintos tipos de dato en un mismo struct 


////  El struct predefinido 
//
//struct Animales {
//	std::string nombre = "Caballo"; 
//	std::string alias = "Trueno"; 
//	int edad = 5; 
//	int carrerasGanadass = 7; 
//};
//
//int main()
//{
//	struct Animales trueno; 
//	trueno.carrerasGanadass += 2;
//
//	std::cout << trueno.carrerasGanadass << std::endl;
//}

/***********************************************************************/


//SEGUNDA FORMA  ****************************************
//CON LOS DATOS RESETEADOS 
//struct Animales {
//	std::string nombre = "a";
//	std::string alias = "a";
//	int edad = 0;
//	int carrerasGanadas = 0;
//
//}Cebra,Ardilla,Cerdo,Cabra;
//
//int main() {
//
//	Cebra.nombre = "Cebra"; 
//	Cebra.alias = " Rayada "; 
//	Cebra.edad = 4; 
//	Cebra.carrerasGanadas = 5; 
//
//
//
//}

// TERCERA FORMA  **********************


struct Empleado {
	std::string puesto = "a"; 
	float sueldo = 0; 
	bool isMarried = false; 
}

empleado1 = { "Cocinero",1200,true },
empleado2 = { "Camarero",1200,false};