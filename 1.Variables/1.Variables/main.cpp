#include<iostream>
#include<limits>

//using namespace std; 


std::string name = "Jhon";
short number = 3456;
long price = 234325; 
int money = 345;
float temperature = 34.4;
double height = 234.3435352;
char letter = '`';
bool isGameStart = false;

void print_data() 
{
	std::cout << " El minimo de short es : "
		<< std::numeric_limits<short>::min()
		<< " El maximo es : "
		<< std::numeric_limits<short>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(short)
		<< " bytes " << std::endl << std::endl; 

	std::cout << " El minimo long es : "
		<< std::numeric_limits<long>::min()
		<< " El maximo es : "
		<< std::numeric_limits<long>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(long)
		<< " bytes " << std::endl << std::endl;

	std::cout << " El minimo int es : "
		<< std::numeric_limits<int>::min()
		<< " El maximo es : "
		<< std::numeric_limits<int>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(int)
		<< " bytes " << std::endl << std::endl;

	std::cout << " El minimo float es : "
		<< std::numeric_limits<float>::min()
		<< " El maximo es : "
		<< std::numeric_limits<int>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(float)
		<< " bytes " << std::endl << std::endl;
	
	std::cout << " El minimo double es : "
		<< std::numeric_limits<double>::min()
		<< " El maximo es : "
		<< std::numeric_limits<double>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(double)
		<< " bytes " << std::endl << std::endl; 

	std::cout << " El minimo char es : "
		<< std::numeric_limits<char>::min()
		<< " El maximo es : "
		<< std::numeric_limits<char>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(char)
		<< " bytes " << std::endl << std::endl;

	std::cout << " El minimo bool es : "
		<< std::numeric_limits<bool>::min()
		<< " El maximo es : "
		<< std::numeric_limits<bool>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(bool)
		<< " bytes " << std::endl << std::endl;

	std::cout << " El minimo long double es : "
		<< std::numeric_limits<long double>::min()
		<< " El maximo es : "
		<< std::numeric_limits<long double>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(long double)
		<< " bytes " << std::endl << std::endl;

	std::cout << " El minimo long long es : "
		<< std::numeric_limits<long long>::min()
		<< " El maximo es : "
		<< std::numeric_limits<long long>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(long long)
		<< " bytes " << std::endl << std::endl;

	std::cout << " El minimo string es : "
		<< std::numeric_limits<std::string>::min()
		<< " El maximo es : "
		<< std::numeric_limits<std::string>::max()
		<< " y ocupa un espacio de : "
		<< sizeof(std::string)
		<< " bytes " << std::endl << std::endl;
}


int main() 
{    
	print_data();

}