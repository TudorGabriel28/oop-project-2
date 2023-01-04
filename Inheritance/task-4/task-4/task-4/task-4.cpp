// task-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
	~A()
	{
		cout << "A destructor" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
	~B()
	{
		cout << "B destructor" << endl;
	}
};

class C : public A, public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
	~C()
	{
		cout << "C destructor" << endl;
	}
};

int main()
{
	C c;
}
