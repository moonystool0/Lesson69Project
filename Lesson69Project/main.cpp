#include "gasStation.h"
#include "car.h"
#include "bus.h"
#include "truck.h"

int main(void) {
	Car car1();
	Car* car2 = new Car();

	Transport* transport = new Transport();

	delete transport;

	transport = new Car();
	delete transport;
	
	transport = new Bus();
	delete transport;
	
	transport = new Truck();
	
	
	//cout << "Total fuel is " << total << endl;

	return 0;
}