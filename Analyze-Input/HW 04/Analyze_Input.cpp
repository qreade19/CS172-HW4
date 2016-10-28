#include <iostream>
using namespace std;

int main()
{
	// Set up the array size.
	int size = 0;
	int * ptr = NULL;
	cout << "Enter the amount of numbers you want the array to have: ";
	cin >> size;
	ptr = new int[size];

	// Enter the numbers into this new array.
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter a new number into your array: ";
		cin >> ptr[i];
	}

	// Calculating the average, first by adding the numbers together, then dividing them by the array size.
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += ptr[i];
	}
	double avg = sum / size;
	cout << "The average of the numbers you've inputted is " << avg << "." << endl;

	// Set to count the number of numbers over the average.
	int largerNumberCount = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] > avg)
			largerNumberCount++;
	}
	cout << "There are " << largerNumberCount << " numbers in the array that are larger than the average." << endl;

	// Cleanup, cleanup, everybody, everywhere.
	ptr = NULL;

	return 0;
}