#pragma once
#include <iostream>
using namespace std;
class person
{
protected:
	string name;
	int id;
	int age;
public:
	person();
	person(string n, int i, int a);
	void setname(string n);
	void setid(int i);
	void setage(int a);
	string getname();
	int getid();
	int getage();
	void printinfo();
	struct appointment
	{
		int hour;
		int min;
	};
};

