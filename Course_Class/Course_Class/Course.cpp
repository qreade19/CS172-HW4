#include <iostream>
#include "Course.h"
using namespace std;

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
		delete[] list;

		// Send out the new array.
		return newList;
	}
	else
	{
		return NULL;
	}
}

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
}

// As this, the "DeepCopy" function, and the "clear" function are the only functions I didn't copy from the book, they'll be to only ones I comment on.
void Course::dropStudent(const string& name)
{
	// Simple premise. The code goes through the entire array and resets the array to fit whoever's been removed.
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name)
		{
			for (int j = i + 1; j < numberOfStudents; j++)
			{
				students[j - 1] = students[j];
			}
			numberOfStudents--;
		}
	}
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

void Course::Clear()
{
	// Also very simple. Unlike the "~Course" function, this just resets the number of students so that the array can be used all over again
	numberOfStudents = 0;
}

Course::Course(const Course& course)
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}

void Course::DeepCopy(const int* list, int size)
{
	// And finally this. As the previous "doubleCapacity" function already does this, I figured it would be simplest to just use that part of the program, minus the size-doubling part, of course.
	int* newList = new int[size];

	for (int i = 0; i < size; i++)
	{
		newList[i] = list[i];
	}
}