#include <iostream> 

int main()
{
	int matriz[20][20];
    int fila = 0;
	int columna = 0; 

	for (fila = 0; fila < 20; fila++) {
		for (columna = 0; columna < 20; columna++) 
		{
			matriz[fila][columna] = 0; 
			matriz[8][0] = 2;
			matriz[8][1] = 2;
			matriz[8][2] = 2;
			matriz[8][3] = 2;

			if (columna == 19) {
				std::cout << (matriz[fila][columna]) << std::endl; 

			}
			else {
				std::cout << (matriz[fila][columna]) << " "; 
			}
		}
	}
}