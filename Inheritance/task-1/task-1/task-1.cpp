// task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Student
{
protected:
	char name[20];
	char faculty[20];
	char branch[20];
	int group;
public:
	void getData()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter faculty: ";
		cin >> faculty;
		cout << "Enter branch: ";
		cin >> branch;
		cout << "Enter group: ";
		cin >> group;
	}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Faculty: " << faculty << endl;
		cout << "Branch: " << branch << endl;
		cout << "Group: " << group << endl;
	}
};

class Leader : public Student
{
protected:
	char post[20];
	int noOfEvents;
public:
	void getdata()
	{
		Student::getData();
		cout << "Enter post: ";
		cin >> post;
		cout << "Enter no of events: ";
		cin >> noOfEvents;
	}
	void display()
	{
		Student::display();
		cout << "Post: " << post << endl;
		cout << "No of events: " << noOfEvents << endl;
	}
};

int main()
{
	Leader leader;
	leader.getData();
	leader.display();
}
