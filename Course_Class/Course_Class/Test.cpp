#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	// A simple use of the required functions. I went with an Undertale theme because WHY NOT??
	Course course1("Soul Magic-101", 10);

	course1.addStudent("Monster Kid");
	course1.addStudent("Chara Dreemurr");
	course1.addStudent("Frisk");

	course1.dropStudent("Chara Dreemurr");

	int classSize = course1.getNumberOfStudents();
	cout << "The students in " << course1.getCourseName() << " are ";
	for (int i = 0; i < classSize; i++)
	{
		cout << course1.getStudents()[i] << ", ";
	}
}