#ifndef _STUDENT_
#define _STUDENT_

#include <iostream>

class Student
{
public:

	Student();
	Student(const char* name);
	Student(const Student& other);
	Student& operator=(const Student& other);
	~Student();


	bool operator<(const Student& other) const;
	bool operator==(const Student& other) const;

	void print() {
		std::cout << name;
	}

private:


	void Copy(const Student& other);
	void Clear();



	char* name;


};

#endif //!_STUDENT_