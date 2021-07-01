#pragma once
#include "Transport.h"
class Bike:public Transport
{
public:
	Bike(int gov_number, string model, string color, int year, string type, int horsepower, int weight) : Transport(gov_number, model, color, year) {
		type_ = type;
		horsepower_ = horsepower;
		weight_ = weight;
	}
	Bike(){}
	void Print() override {
		PRINT(type_);
		PRINT(horsepower_);
		PRINT(weight_);
	}
private:
	string type_;
	int horsepower_;
	int weight_;
};

