#pragma once
#include "_import.h"
class Transport
{
public:
	Transport(int gov_number, string model, string color, int year) {
		gov_number_ = gov_number;
		model_ = model;
		color_ = color;
		year_ = year;
	}
	Transport() {}
	virtual void Print() {
		PRINT(gov_number_);
		PRINT(model_);
		PRINT(color_);
		PRINT(year_);
	}

	int GetGovNumber() {
		return gov_number_;
	}
	string GetColor() {
		return color_;
	}



private:
	int gov_number_;
	string model_;
	string color_;
	int year_;
};

