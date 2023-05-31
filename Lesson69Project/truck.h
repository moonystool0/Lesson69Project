#pragma once
#include "transport.h"

class Truck : public Transport
{
private:
	int weight;

public:
	Truck() : Transport(), weight(0) {}
	Truck(int tank, int weight) : Transport(tank), weight(weight) {}
	~Truck() {}

	int getWeight();
	void setWeight(int weight);
};

