#pragma once
#include "Transport.h"
class Ñonfiscated : public Transport
{
public:
	Ñonfiscated(int gov_number, string model, string color, int year, int gov_num, string why, int date) : Transport(gov_number, model, color, year){
		gov_num_ = gov_num;
		why_ = why;
		date_ = date;
	}
	void Print() override {
		PRINT(gov_num_);
		PRINT(why_);
		PRINT(date_);
	}
	void AddConfiscated(Transport transp) {
		
	}

	void DeleteConfiscated(Transport transp) {
		
	}  


private:
	int gov_num_;
	string why_;
	int date_;

};

