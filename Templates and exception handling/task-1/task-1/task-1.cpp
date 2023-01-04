// task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

template <typename T>
T genSum(T a, T b)
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;
	float c = 3.5, d = 4.5;
	
	cout << "Sum of a and b is: " << (int) genSum<int>(a, b) << endl;
	cout << "Sum of c and d is: " << (float) genSum<float>(c, d) << endl;
}


