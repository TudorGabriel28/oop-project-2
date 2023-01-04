// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int* pointer = new int(65);
    char* charPointer = reinterpret_cast<char*>(pointer);
    cout << *pointer << endl;
    cout << *charPointer << endl;
    cout << pointer << endl;
    cout << charPointer << endl;
    return 0;
}


