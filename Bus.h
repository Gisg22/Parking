#pragma once
#include "Transport.h"
class Bus:public Transport
{
public:
	Bus(int gov_number, string model, string color, int year, int number_of_seats, string for_whom, bool is_double_decker) : Transport(gov_number, model, color, year) {
		number_of_seats_ = number_of_seats;
		for_whom_ = for_whom;
		is_double_decker_ = is_double_decker;
	}
	Bus() {};
	void Print() override {
		PRINT(number_of_seats_);
		PRINT(for_whom_);
		PRINT(is_double_decker_);
	}
private:
	int number_of_seats_;
	string for_whom_;
	bool is_double_decker_;
};

