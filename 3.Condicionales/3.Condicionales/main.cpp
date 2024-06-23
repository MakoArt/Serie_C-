#include<iostream>


//int main()
//{
//
//	//CONDICIONAL SIMPLE PARA CONTROLAR LA ENTRADA DE PERSONAL A UNA DISCOTECA 
//    
//	int age = 0;
//    std::cout << " Introduce tu edad :" << std::endl; 
//	std::cin >> age;
//
//	if (age >= 18) 
//	{
//		std::cout << "Puedes entrar a la discoteca " << std::endl;
//	}
//	else {
//		
//		std::cout << "No puedes entrar a la discoteca porque eres menor de edad " << std::endl; 
//
//	}
//    system("pause");
//	return 0;
//}

//
//int main() 
//{
//	float notas = 0.0;
//
//		std::cout << " Introduce el resultado de tus notas : " << std::endl; 
//		std::cin >> notas; 
//
//		if (notas < 5) {
//			std::cout << " Has suspendido " << std::endl; 
//
//		}
//		else if (notas >= 5 && notas < 6) {
//			std::cout << " Has obtenido un suficiente " << std::endl;
//		}
//		else if (notas >= 6 && notas < 7) {
//			std::cout << " Has obtenido un bien " << std::endl;
//		}
//		else if (notas >= 7 && notas < 9) {
//			std::cout << " Has obtenido un notable " << std::endl; 
//		}
//		else if (notas >= 9 && notas < 10) {
//			std::cout << " Has obtenido un sobresaliente" << std::endl;
//		}
//		else if (notas == 10) {
//			std::cout << " Has obtenido una matricula de honor " << std::endl;
//		}
//		else {
//			std::cout << " El profesor estaba loco o muy borracho " << std::endl;
//		}
//
//	
//}




//CALCULADORA  

int main()
{
	float primerNumero = 0.0; 
	float otroNumero = 0.0; 
	char operacion = '.';
	float resultado = 0; 
	
	std::cout << "Introduce el primer numero " << std::endl; 
	std::cin >> primerNumero;
	resultado = primerNumero;
	std::cout << "Introduce + , - , * o / y pula enter " << std::endl; 
	std::cin >> operacion; 
	std::cout << " Introduce otro numero " << std::endl; 
	std::cin >> otroNumero;

	switch (operacion)
	{
	case '+': 
		resultado += otroNumero;
		break;
	case '-':
		resultado -= otroNumero;
		break;
	case '*':
		resultado *= otroNumero;
		break;
	case '/':
		resultado /= otroNumero;
		break;
	default: 
		std::cout << " Tienes que escoger una opcion obligatoriamente " << std::endl;
		break;

		

	}

	std::cout << " El resultado de la operacion es " << resultado << std::endl;

	system("pause"); 
	return 0;
}