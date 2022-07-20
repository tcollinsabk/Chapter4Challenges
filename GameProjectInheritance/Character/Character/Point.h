#pragma once
template<typename Type>
class Point
{
public:
	Type x;
	Type y;

	Point(Type xVal = 0, Type yVal = 0)
		: x(xVal),
		  y(yVal)
	{

	}

	Type GetLargerCoordinates()
	{
		if (x > y)
			return x;
		return y;
	}

	Type GetSmallerCoordinates()
	{
		if (x < y)
			return x;
		return y;
	}
};