#include <iostream>
#include "List.h"
#include "Student.h"



int main()
{

	List<Student> l;


	l.PushBack("Ivan");
	l.PushFront("Petkan");
	l.PushFront("Ignat");
	l.PushFront("Todor");
	l.PopBack();
	l.PopFront();

	l.PopFront();
	l.PopBack();
	l.PopFront();

	List<Student>::Iterator iterator(l.begin());

	l.RemoveAfter(iterator);


	for (Student i : l)
		i.print();

	return 0;
}