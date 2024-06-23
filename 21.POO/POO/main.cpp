







#include<iostream>


 class Citizen { 

public:
	std::string _name; 
	std::string _surname; 
	int _age; 
	int _power;
	int _speed;
	int _intellisense;
	bool _isMarried; 
public:
	Citizen() {
		_name = "Scarllet"; 
		_surname = "Johansson";
		_age = 35;
		_power = 9; 
		_speed = 8;
		_intellisense = 7;
		_isMarried = false; 
    }

	Citizen(std::string name,std::string surname,int age, int power,int speed,int intellisense,bool isMarried) {

		_name = name; 
		_surname = surname;
		_age = age; 
		_power = power; 
		_speed = speed; 
		_intellisense = intellisense; 
		_isMarried = isMarried;
	}
	~Citizen() {
		std::cout << " El objeto Citizen ha sido destruido " << std::endl;
	}

	void Saludo() {
		std::cout << " Hola forastero , mi nombre es  " << _name << "bienvenido a la ciudad " << std::endl;
	}

	int GetPower() {
		return _power;
	}
	int GetSpeed() {
		return _speed;
	}
	void SetPower(int power) {
		_power = power;
	}
	void SetSpeed(int speed) {
		_speed = speed;
	}
	int GetAge() {
		return _age;
	}
	void SetAge(int age) {
		_age = age;
	}

	
	W

};

 class Traveller {
 public:
	 Traveller(){}
 };

 class Indian : public Citizen,public Traveller {
 public:
	 bool _hasWeapon;


	
	 Indian(bool hasWeapon, std::string name, std::string surname, int age, int power, int speed, int intellisense, bool isMarried) :Citizen(name, surname, age, power, speed, intellisense, isMarried) {
		 _hasWeapon = true;
		 _name = "Jhon";
		 _surname = "Justin";

	 }
	 ~Indian() {
		 std::cout << "Clase destruida correctamente " << std::endl;
	 }
	 void Saludar() {
		 std::cout << "Hola que tal , me llamo " << _name << std::endl;
	 };



 };

 int main() {

	 Citizen Scarllet("Scarllet", "Johansson", 33, 32, 23, 33, false);
	 Scarllet.SetAge(30);
	 std::cout << Scarllet.GetAge() << std::endl;
	 
	 Indian indian(true,"Jhon","Justin",23,34,12,34,false);
	 indian.Saludar();
 }

 class Automovil {
 public: 
	 virtual void Saludo() const = 0;

	 virtual void Correr() const = 0;
 };


 class Coche:public Automovil{
 public:
	 void Saludo()const override {
		 std::cout << "Soy un automovil " << std::endl;
	 }
 };


//CLASES Y OBJETOS *
//PROPIEDADES Y MÉTODOS *
  //MODOS DE ACCESO *
  // SOBRECARGA DE MÉTODOS O CONSTRUCTORES *
//CONSTRUCTORES Y DESTRUCTORES *
// GETTERS Y SETTERS *
//HERENCIA *
//MULTIHERENCIA *
//METODO VIRTUAL PURO
 //CLASES ABSTRACTAS 	


