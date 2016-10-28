#include <iostream>
using namespace std;

// The code to double an array's capacity
int* doubleCapacity(const int* list, int size)
{
	if (size > 0)
	{
		// Sets up a new array at double the original size.
		int* newList = new int[size * 2];

		// Transfers over the values from the original array to the new one.
		for (int i = 0; i < size; i++)
		{
			newList[i] = list[i];
		}

		// Cleans away the last array.
		delete [] list;

		// Send out the new array.
		return newList;
	}
	else
	{
		return NULL;
	}
}

// Just so that it doesn't error me for not utilizing the capacity doubler.
int main()
{
	const int ARRAY = 10;
	int list[ARRAY];
	doubleCapacity(list, 10);
}