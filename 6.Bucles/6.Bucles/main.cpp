#include<iostream> 
#include<vector>



int main()
{
	//for 
	/*for (int i = 0; i < 100; i++) {

		std::cout << " El numero es el : " << i << std::endl;
	}*/

	//Con un for podemos recorrer vectores y arrays  

	//recorremos ascendentemente un array 
	//std::string animales[3] = { "Caballo","Burro","Jabali" }; 

	//for (int i = 0; i < sizeof(animales) / sizeof(std::string); i++)
	//{
	//	
	//		std::cout << " El array animales ascendente :" << animales[i] << std::endl;
	//}
	////recorremos de manera descendente el array 

	//for (int i = sizeof(animales) / sizeof(std::string) - 1; i >= 0; i--)
	//{
	//	std::cout << "El array descendente "<< animales[i] << std::endl;
	//}

	//Recorrer con un foreach   ((leemos que por cada elemento de elementos hacemos algo)

	/*for (std::string animal : animales)
	{
		std::cout << animal << std::endl;
	}*/

	//Recorriendo un vector  con un for 

	//std::vector<std::string> peces = { "Raya","Tiburon","Payaso","Payaso" }; 

	//for (int i = 0; i < peces.size(); i++)
	//{
	//	std::cout << peces[i] << std::endl;
	//}

	////Recorriendo el vector con un Foreach  

	//for (std::string pez : peces)
	//{
	//	std::cout << pez << std::endl;
	//}


	//Los iteradores o iterators  
	//std::vector<std::string> peces = { "Raya","Tiburon","Payaso","Globo" }; 

	//for (std::vector<std::string>::iterator itr = peces.begin(); itr != peces.end(); itr++)
	//{
	//	std::cout << *itr << std::endl;
	//}

	//WHILE Y DO WHILE  (mientras) //podemos romper la ejecución de un while con return , break , continue

	int i = 200;

	while (i < 100)
	{
		std::cout << "Ejecucion del primer while " << i << std::endl;
		i++;
	}

	do
	{
		std::cout << "Ejecucion del segundo while " << i << std::endl;
		i++;

	} while (i < 100);

	//FOR 
	//FOREACH 
	//WHILE 
	//DO WHILE  
}