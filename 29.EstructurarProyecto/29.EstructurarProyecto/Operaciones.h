#pragma once

 class Operaciones {
private: 
	int _numero1; 
	int _numero2; 

public: 

	Operaciones(int numero1, int numero2);
	void Saludar(); 
	void SetOperation(int, int); //setter 
	int GetOperation();          //getter 

	~Operaciones() {};
};