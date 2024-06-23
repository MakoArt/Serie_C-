#include<iostream>
#include<memory> 




int main() 
{
	
	//PUNTERO ÚNICO , PUNTERO COMPARTIDO , PUNTERO DEBIL  
	 
	
	// puntero unico(cada puntero apunta a su direccion de memoria)
	//int numero1 = 5; 
	//std::unique_ptr<int>ptrNumber1 = std::make_unique<int>(numero1); 
	//std::cout << ptrNumber1 << std::endl;

	//std::unique_ptr<int>ptrNumber2 = std::move(ptrNumber1);
	//std::cout << ptrNumber2 << std::endl;
	//
	
	
	
	
	
	
	//puntero compartido (permite a varios punteros acceder al mismo espacio de memoria) 
	
	//
	//
	//
	//int numero2 = 6;
	//std::shared_ptr<int>ptrNumber2 = std::make_shared<int>(numero2);


	//std::shared_ptr<int>ptrNumber3 = ptrNumber2;
	//std::shared_ptr<int>ptrNumber4 = ptrNumber2;
	//std::shared_ptr<int>ptrNumber5 = ptrNumber2;

	//ptrNumber5.reset();

	//std::cout << " El numero de punteros que apuntan a memoria de ptrNumber2 son : " << ptrNumber2.use_count() << std::endl;

	//std::cout << ptrNumber2 << std::endl;
	//std::cout << ptrNumber3 << std::endl;
	//std::cout << ptrNumber4 << std::endl;
	//std::cout << ptrNumber5 << std::endl;


	//El puntero debil  

	std::weak_ptr<int>weakPtr;
	std::shared_ptr<int>shPtr = std::make_unique<int>(100);

	weakPtr = shPtr;


	return 0;
}



