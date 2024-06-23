#include<iostream>



enum ColorState {RED,BLUE,GREEN};
ColorState colorState; 


void ChangeColorFunction(ColorState color) {
	 
	switch (color) {
	case RED:
		system("color 41");
		break;
	case GREEN:
		system("color 21"); 
		break;
	case BLUE: 
		system("color 14");
		break;
	default:
		system("color 01");
		break;
	}
	  
}



int main() {
	int number = 0; 

	std::cout << "Introduce en la consola 1 para rojo , 2 para azul y 3 para verde " << std::endl; 
	std::cin >> number; 

	if (number == 1)colorState = RED; 
	if (number == 2)colorState = BLUE;
	if (number == 3)colorState=GREEN;

	ChangeColorFunction(colorState);


}