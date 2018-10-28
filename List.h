#ifndef _LIST_
#define _LIST_

#define Type int


class List
{

public:

	List();
	List(const List &other);
	List& operator=(const List &other);
	~List();

	void PushBack(Type &element);
	void PushFront(Type &element);

	void PopBack(Type &element);
	void PopFront(Type &element);

	void InsertAfter(Type &target, Type &element);
	void RemoveAfter(Type &target);




private:


	class Box
	{
	public:

		Box(Type element, Box* next = nullptr);
		Box& Next();
		Type& Data();

	private:

		Type data;
		Box* next;
	};


	Box* head;
	Box* tail;





};




List::List()
{
	head = nullptr;
	tail = nullptr;
}

List::List(const List &other)
{

}

List& List::operator=(const List &other);
List::~List();

void List::PushBack(Type &element)
{
	Box* temp = new Box(element);

	if (head == nullptr)
	{
		head = temp;
		tail = temp;

		return;
	}

	tail->Next() = element;
	tail = &tail->Next();
}
void List::PushFront(Type &element)
{
	Box* temp = new Box(element);

	temp->Next() = head;
	head = temp;

}

void List::PopBack(Type &element);
void List::PopFront(Type &element);

void List::InsertAfter(Type &target, Type &element);
void List::RemoveAfter(Type &target);



List::Box::Box(Type element, Box* next = nullptr)
{
	this->data = element;
	this->next = next;
}

List::Box& List::Box::Next()
{
	return *next;
}

Type& List::Box::Data()
{
	return data;
}

#endif // !_LIST_

