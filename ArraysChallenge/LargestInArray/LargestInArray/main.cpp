#include <iostream>
using namespace std;


int getLargest(int numbers[], int size)
{
	int largest = numbers[0];

	for (int i = 1; i < size; i++)
	{
		if (numbers[i] > largest)
		{
			largest = numbers[i];
		}

	}

	return largest;
}

int main()
{
	int nums[10] = { 11,24,15,67,92,110,2,5,36,22 };
	int largest = getLargest(nums, 10);

	cout << "The largest number is " << largest << endl;

	return 0;
}