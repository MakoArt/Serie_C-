#include<iostream>  
#include<vector>




int main() 
{   
	//ARRAYS (estáticos)
	//diferenciamos entre indices de un array Y numero de elementos de una array
	//Un array empieza en el indice 0 

	//std::string empleados[5] = { "Jhon","Paul","Ramirez","Johanson","Pepe"};
 //   
	//std::cout << empleados[3] << std::endl;

	////Saber el tamaño de un array  

	//std::cout << sizeof(empleados) / sizeof(std::string) << std::endl;

	//VECTOR 
	//son dinámicos  

	//std::vector<int> identidadesVec = { 2,3,4,5,6,7,8,9 };
	//int identidadesArr[9] = { 1,2,3,4,5,6,7,8,9 };

	//acceder al primer elemento 
	/*std::cout << "Primer elemento de Vector " << identidadesVec[0] << std::endl;
	std::cout << "Primer elemento de Array "  <<  identidadesArr[0] << std::endl;*/

	//accedemos al ultimo elemento de un array y ultimo de un vector  

	/*std::cout << "Ultimo elemento de un Vector " << identidadesVec.back() << std::endl;
	std::cout << "Ultimo elemento de un Array " << identidadesArr[sizeof(identidadesArr) / sizeof(int) - 1] << std::endl; */

	// el tamaño de un vector y el tamaño de un array  

	//std::cout << " Numero de elementos del Vector" << identidadesVec.size() << std::endl;
	//std::cout << "Numero de elementos del array " << sizeof(identidadesArr) / sizeof(int)  << std::endl;

	////Añadir o quitar elementos de un vector  

	//identidadesVec.push_back(345); 

	//std::cout << " El ultimo elemento de el vector es : " << identidadesVec.back() << std::endl; 
	//std::cout << " El primer elemento de un vector es :" << identidadesVec.front() << std::endl;

	//Insertar  (En una posición determinada)
 //   
	//identidadesVec.insert(identidadesVec.begin() + 2, 666);
	//std::cout << "El elemento que esta en el primer lugar : " << identidadesVec.front() << std::endl; 
	//std::cout << "El elemento que esta en el segundo lugar :" << identidadesVec[3] << std::endl;    

 //   //Remove  

	//identidadesVec.erase(identidadesVec.begin() + 2); 
	//std::cout << " El segundo elemento despues de borrar es : " << identidadesVec[2] << std::endl;


	
}