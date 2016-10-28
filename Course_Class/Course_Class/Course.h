#pragma once
#ifndef Course_H
#define Course_H
#include <string>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity);
	~Course();
	Course(const Course&);
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
	void Clear();
	void DeepCopy(const int* list, int size);
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};

#endif