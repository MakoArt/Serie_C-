#include<iostream>



int *PrintData(int *data)
{
	*data = *data / 2;
    
	return data;
}


int main()
{
	int number = 30; 
    int* returnData = PrintData(&number);
	std::cout << *returnData << std::endl; 

	returnData = nullptr;

}