#pragma once
#include "main.h"

class Transport
{
private:
	int tank;

public:
	Transport() : tank(0) {}
	Transport(int tank) : tank(tank) {}
	~Transport() {}

	int getTank();	
	void setTank(int tank);	
};

