// task-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		cout << "Constructor of class A" << endl;
	}
	~A()
	{
		cout << "Destructor of class A" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "Constructor of class B" << endl;
	}
	~B()
	{
		cout << "Destructor of class B" << endl;
	}
};

int main()
{
	B b;
	return 0;
}
