#include "Student.h"
#include <iostream>

Student::Student()
	:name(nullptr)
{
}

Student::Student(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

Student::Student(const Student& other)
{
	Copy(other);
}

void Student::Copy(const Student& other)
{
	this->name = new char[strlen(other.name) + 1];
	strcpy(this->name, other.name);
}

void Student::Clear()
{
	delete[] name;

}

Student& Student::operator=(const Student& other)
{
	if (this != &other)
	{
		Clear();
		Copy(other);
	}
	return *this;
}

Student::~Student()
{
	Clear();
}

bool Student::operator<(const Student& other) const
{
	return strcmp(this->name, other.name) < 0;
}

bool Student::operator==(const Student& other) const
{
	return strcmp(this->name, other.name) == 0;
}