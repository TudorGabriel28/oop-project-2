// task-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


class Base
{
public:
	virtual void show() { cout << " In Base \n"; }
};

class Derived : public Base
{
public:
	void show() { cout << "In Derived \n"; }
};

int main()
{
	Base* bptr;
	Derived d;
	bptr = dynamic_cast<Base*>(&d);

	if (bptr == NULL)
		cout << "Null pointer on type-cast \n";
	else
		bptr->show();

	return 0;
}