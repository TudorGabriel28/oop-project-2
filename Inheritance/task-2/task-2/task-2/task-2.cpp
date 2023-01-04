// task-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class student
{
protected:
	char name[20];
	char faculty[20];
	char branch[20];
	char group[20];
public:
	void get_student()
	{
		cout << "Enter the name: ";
		cin >> name;
		cout << "Enter the faculty: ";
		cin >> faculty;
		cout << "Enter the branch: ";
		cin >> branch;
		cout << "Enter the group: ";
		cin >> group;
	}
	void display_student()
	{
		cout << "Name: " << name << endl;
		cout << "Faculty: " << faculty << endl;
		cout << "Branch: " << branch << endl;
		cout << "Group: " << group << endl;
	}
};

class employee
{
protected:
	int emp_id;
	char emp_name[20];
	char emp_dept[20];
	char emp_desig[20];
public:
	void get_employee()
	{
		cout << "Enter the employee id: ";
		cin >> emp_id;
		cout << "Enter the employee name: ";
		cin >> emp_name;
		cout << "Enter the employee department: ";
		cin >> emp_dept;
		cout << "Enter the employee designation: ";
		cin >> emp_desig;
	}
	void display_employee()
	{
		cout << "Employee id: " << emp_id << endl;
		cout << "Employee name: " << emp_name << endl;
		cout << "Employee department: " << emp_dept << endl;
		cout << "Employee designation: " << emp_desig << endl;
	}
};

class officer : public student, public employee
{
protected:
	char grade[20];
public:
	void get_officer()
	{
		get_student();
		get_employee();
		cout << "Enter the grade: ";
		cin >> grade;
	}
	void display_officer()
	{
		display_student();
		display_employee();
		cout << "Grade: " << grade << endl;
	}
};

int main()
{
	officer o;
	o.get_officer();
	o.display_officer();
}