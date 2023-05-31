#include "truck.h"


int Truck::getWeight() {
	return weight;
}

void Truck::setWeight(int weight) {
	if (weight > 0) {
		this->weight = weight;
	}
}