#include "Car.h"
#include <iostream>

int main()
{
	Car myCar(2021, 1000, "Hyundai");
	myCar.Display();
	myCar.Drive(200);
	myCar.Display();
	return 0;
}