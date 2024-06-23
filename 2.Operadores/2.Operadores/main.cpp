#include <iostream>




int main() 
{
	//OPERADORES ARITMÉTICOS + - * / % 

    /*std::cout << " La suma de 2 + 2 es igual : " << 2 + 2 << std::endl;
    std::cout << " La resta de 2 - 2 es igual : " << 2 - 2 << std::endl;
    std::cout << " La multiplicacion de 2 * 2 es igual : " << 2 * 2 << std::endl;
    std::cout << " La division de 2 / 2 es igual : " << 2 / 2 << std::endl;
    std::cout << " El resto de 2 % 2 es igual : " << 2 % 2 << std::endl;
    
    int numeroNinios = 5; 
    int numeroNinias = 4; 
    int caramelosPorNinio = 4;

    std::cout << " Operacion :" << caramelosPorNinio * numeroNinios + numeroNinias << std::endl;
    std::cout << " Operacion :" << caramelosPorNinio * (numeroNinios + numeroNinias)  << std::endl;*/

    //parentesis 
    //potencias y raices 
    // multiplicaciones y divisiones 
    // sumas y restas 

    //OPERADOR DE ASIGNACIÓN  =

   // int age = 24; 

    //OPERADORES DE INCREMENTO Y DECREMENTO b++ b-- ++b --b += -=

    //int number = 5; 
    //std::cout << (++number) << std::endl;
    //std::cout << number << std::endl;

    int powerPlayer = 5; 
    std::cout << " El player no va al gimnasio y tiene una fuerza de :" << powerPlayer  << std::endl;
    powerPlayer += 4; 
    std::cout << " El player  va al gimnasio y tiene una fuerza de :" << powerPlayer << std::endl;


    //OPERADORES DE COMPARACIÓN  == != < > >= <=

   /* std::cout << " 6 es igual de 6 : "  <<   (6 == 6) << std::endl;
    std::cout << " 6 es distinto de 6 : " << (6 != 6) << std::endl;
    std::cout << " 6 es menor de 6 : " << (6 < 6) << std::endl;
    std::cout << " 6 es mayor de 6 : " << (6 > 6) << std::endl;
    std::cout << " 6 es mayor o igual  que 6 : " << (6 >= 6) << std::endl;
    std::cout << " 6 es menor o igual que 6 : " << (6 <= 6) << std::endl;
 */
    //OPERADORES LÓGICOS  &&(Y)  ||(O)  

   // std::cout <<( (2 == 2) && (5 == 5)) << std:: endl;
    std::cout << ((2 != 2) || (5 == 5)) << std::endl;

    //OPERADOR DE NEGACIÓN  !

    bool isWinning = true;

    if (!isWinning) 
    {
        std::cout << "No estoy ganando" << std::endl; 
    }
    else 
    {
        std::cout << " Estoy ganando" << std::endl;
    }


}