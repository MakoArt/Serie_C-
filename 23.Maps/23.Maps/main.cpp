#include <iostream>
#include <map> 



int main() {

	std::map<std::string, float> temps = { {"Varkin",3.4},{"Goltar",-3.4} };

	//Acceder al valor de un dato 
	std::cout << " La temperatura media de Varkin es : " << temps["Varkin"] << std::endl; 

	//Insertar datos 

	temps.insert({ "Capri",-23.3 });
	std::cout << " La temperatura en Capri es : " << temps["Capri"] << std::endl; 

	//Borrar  (no vamos a acceder para comprobarlo por su indice)
    temps.erase("Varkin"); 

	//Iterar un map  

	std::map<std::string, float>::iterator i; 

	for (i = temps.begin(); i != temps.end(); i++) {
		 
		std::cout << i->first << " : " << i->second << std::endl;
	}

	//Borrar todo el Map 

	temps.clear();
	

	return 0;
}