#include <iostream>
using namespace std;

int main()
{
	// Figured a similar start to the first problem would work here.
	int size = 0;
	int * ptr = NULL;
	cout << "Enter the amount of numbers you want the array to have: ";
	cin >> size;
	ptr = new int[size];

	// Set in the new numbers.
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter a new number into your array: ";
		cin >> ptr[i];
	}

	// Finally, the code to find the smallest element.
	int smallestNum = ptr[1];
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] < smallestNum)
			smallestNum = ptr[i];
	}
	cout << "The smallest number is " << smallestNum << endl;

	// And, of course, the cleanup.
	ptr = NULL;

	return 0;
}