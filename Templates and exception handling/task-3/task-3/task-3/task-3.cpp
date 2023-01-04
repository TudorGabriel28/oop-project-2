// task-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
	int a, b, c;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	try
	{
		if (b == 0)
			throw "Divide by zero error";
		c = a / b;
		cout << "Result = " << c;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}


	return 0;
}
