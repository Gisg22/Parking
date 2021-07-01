#pragma once
#include "_import.h"
#include "Transport.h"

class Parking
{
public:
	Parking(string name, int number_of_seats) {
		name_ = name;
		number_of_seats_ = number_of_seats;
	}
	Parking() {

	}

	void SortTransports() {
		for (auto& item : transport) {
			sort(transport.begin(), transport.end(), item->GetGovNumber());
		}
	}

	vector <unique_ptr<Transport>>& GetTransport() {
		return transport;
	}

	

private:
	string name_;
	int number_of_seats_;
	vector <unique_ptr<Transport>> transport;
};

