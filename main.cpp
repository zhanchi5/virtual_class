#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Person
{
protected:
	string gender_;
	int age_;

public:
	string name_;
	Person(string gender, int age)
		: gender_(gender),
		age_(age)
	{
	}




	string Gender()
	{
		cout << "Enter gender of student:" << endl;
		cin >> gender_;
		return gender_;
	}

	int Age()
	{
		return age_;
	}


	virtual ~Person() = 0;
};

Person::~Person()
{
}

class Student : public Person
{
protected:
	int year_;
	string group_, name_, surname_;
	int num_;

public:
	Student(string name, string surname, string gender, int age, int year, string& group)
		: Person(gender, age),
		year_(year),
		group_(group)
	{

	}

	int Year()
	{
		return year_;
	}

	string Group()
	{
		cout << "Enter group:" << endl;
		cin >> group_;
		return group_;
		fflush(stdin);
	}
	string Name()
	{
		cout << "Enter name:" << endl;
		cin >> name_;
		return name_;
	}

	string Surname()
	{
		cout << "Enter surname:" << endl;
		cin >> surname_;
		return surname_;
	}

};

class GradStudent : public Student
{
protected:
	unsigned int graduation_;

public:
	GradStudent(string name, string surname, string gender, int age, int year, string& group, unsigned int graduation)
		: Student(name, surname, gender, age, year, group),
		graduation_(graduation)
	{

	}

	unsigned int Graduation()
	{
		return graduation_;
	}

	void print()
	{
		cout << name_ << " " << surname_ << " " << gender_ << " " << group_ << " " << age_ << " " << year_ << " " << graduation_ << " " << endl;
	}
};

int main()
{
	string name, surname, group;
	string gender;
	unsigned int  year, graduation;
	int age;

	cout << "Enter students age:" << endl;
	cin >> age;


	cout << "Enter entry year:" << endl;
	cin >> year;

	cout << "Enter graduation year:" << endl;
	cin >> graduation;




	GradStudent gradStudent(name, surname, gender, age, year, group, graduation);
	gradStudent.Name();
	gradStudent.Surname();
	gradStudent.Gender();
	gradStudent.Group();

	gradStudent.print();
	system("pause");
	return 0;
}