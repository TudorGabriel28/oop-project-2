// task-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

template <class T>
class Rectangle
{
private:
	T length;
	T breadth;
public:
	Rectangle(T l, T b)
	{
		length = l;
		breadth = b;
	}
	T area()
	{
		return length * breadth;
	}
};

int main()
{
	Rectangle<int> r1(10, 5);
	cout << "Area of rectangle with integer dimensions is " << r1.area() << endl;
	Rectangle<float> r2(10.5, 5.5);
	cout << "Area of rectangle with float dimensions is " << r2.area() << endl;
	return 0;
}
