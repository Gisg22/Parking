#pragma once
#include "Transport.h"
class Car:public Transport
{
public:
	Car(int gov_number, string model, string color, int year, string type, int number_of_seats, string type_of_fuel) : Transport(gov_number, model, color, year) {
		type_ = type;
		number_of_seats_ = number_of_seats;
		type_of_fuel_ = type_of_fuel;
	}
	Car(){}

	void Print() override {
		PRINT(type_);
		PRINT(number_of_seats_);
		PRINT(type_of_fuel_);
	}
private:
	string type_;
	int number_of_seats_;
	string type_of_fuel_;
};

