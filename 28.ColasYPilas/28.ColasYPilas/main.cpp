#include<iostream> 
#include<stack> 
#include<queue> 



//PILAS Y COLAS  



int main() {

	std::stack<std::string>pila; 
	std::queue<std::string>cola;

   //introducimos datos en una pila 
	pila.push("Jorge"); 
	pila.push("Antonio"); 
	pila.push("Mariano"); 

	// introducimos datos en una cola 
	cola.push("Alemania"); 
	cola.push("Francia"); 
	cola.push("Italia"); 

	while (pila.size() > 0) {
		std::cout << pila.top() << std::endl; 
		pila.pop();
	}

	while (cola.size() > 0) {
		std::cout << cola.front() << std::endl; 
		cola.pop();
	}

	

	std::cout << "Los elementos restantes de la pila son :" << pila.size() << std::endl;
	std::cout << "Los elementos restantes de la cola son :" << pila.size() << std::endl;
}