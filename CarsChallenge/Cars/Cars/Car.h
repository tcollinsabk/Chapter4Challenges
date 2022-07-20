#pragma once
#include <string>

class Car
{
	int m_year;
	int m_miles;
	std::string m_brand;

public:
	Car();
	Car(int year, int miles, std::string brand);
	~Car();

	void Display();
	void Drive(int miles);
};
