#include<iostream>


//int MultiplyNumbers(int num1, int num2)
//{
//	return num1 * num2;
//}
//
//
//int main()
//{
//	int(*funcPointer)(int, int) = MultiplyNumbers; 
//
//	std::cout << funcPointer(2,2) << std::endl;
//	std::cout << MultiplyNumbers(2, 2) << std::endl;
//	
//
//}

//EJEMPLOS DE USO DE LAS FUNCIONES PUNTERO  

//int PrintNumber(int number) 
//{
//	return number * 3;
//}
//
//void PrintPhrase(std::string phrase, int (*ptrPrintNumber)(int))
//{
//	std::cout << phrase << ptrPrintNumber(5) << " " << "entradas" << std::endl;
//
//}
//
//int main() {
//	int(*ptrPrintNum)(int) = PrintNumber;
//	PrintPhrase(" Hola que tal estas he conseguido ", ptrPrintNum);
//}