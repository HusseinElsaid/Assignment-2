#include "person.h"
person::person(){}
person::person(string n, int i, int a) {
	name = n;
	id = i;
	age = a;
}
void person::setname(string n) {
	name = n;
}
void person::setid(int i) {
	id = i;
}
void person::setage(int a) {
	age = a;
}
string person::getname() {
	return name;
}
int person::getid() {
	return id;
}
int person::getage() {
	return age;
}
void person::printinfo() {
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Age: " << age << endl;
}
