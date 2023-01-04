// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	try
	{
		try
		{
			throw 20;
		}
		catch (int n)
		{
			cout << "Handle Partially " << endl;
			throw; //rethrowing an exception
		}
	}
	catch (int n)
	{
		cout << "Handle remaining";
	}
}
