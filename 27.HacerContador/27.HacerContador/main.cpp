#include<iostream> 
#include<thread>
#include<chrono>
#include<windows.h> 


void NpcConver(std::string message) {

	std::cout << message << std::endl; 
}

int main() {

	int segundos = 0; 
	int minutos = 0; 
	int horas = 0; 
	bool timer = true; 
    

	while (timer) {
		segundos++;
		std::cout << horas << " : " << minutos << " : " << segundos << std::endl;

		
		Sleep(1000);
		system("cls");

		if (segundos > 59) {
			segundos = 0;
			minutos++;

		}
		else if (minutos > 59) {
			minutos = 0; 
			horas++;
		}
		else if (horas >= 23) {
			
			horas = 0;

		}

	
	}


	return 0;
}