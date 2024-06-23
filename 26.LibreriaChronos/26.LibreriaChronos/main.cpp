#include<chrono>
#include<iostream>
#include<thread>


//using namespace std::this_thread;
//using namespace std::chrono;

void Function1() {
	/*for (int i = 0; i < 200; i++) {
		std::cout << i << std::endl;
	}*/

	std::cout << "hola" << std::endl;
}

void Function2() {

	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 200; j++) {
			std::cout << i << j << std::endl;
		}
	}
};

void Function3() {

	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 200; j++) {
			for (int k = 0; k < 200; k++) {
				std::cout << i << j << k << std::endl;

			}
		}
	}
};




int main() {
	//MEDIMOS LOS ALGORITMOS 

	auto startFunction = std::chrono::system_clock::now(); //tiempo actual 
	Function3();
	auto finalFunction = std::chrono::system_clock::now();//tiempo final 

	std::chrono::duration<float, std::milli>duration = finalFunction - startFunction; 


	std::cout << duration.count() << " milliseconds " << std::endl;
};