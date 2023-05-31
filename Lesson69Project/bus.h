#pragma once
#include "transport.h"

class Bus : public Transport
{
private:
	int number;

public:
	Bus() : Transport(), number(0) {}
	Bus(int tank, int number) : Transport(tank), number(number) {}
	~Bus() {}

	int getNumber();
	void setNumber(int number);
};

