#include "mechanic.h"
mechanic::mechanic() {
	count = 0;
}
mechanic::mechanic(string n, int i, int a) {
	count = 0;
	name = n;
	id = i;
	age = a;
	apps = vector<appointment>();
}
void mechanic::setcount(int c) {
	count = c;
}
int mechanic::getcount() {
	return count;
}
void mechanic::setapp(int h, int m) {
	appointment ap;
	ap.hour = h;
	ap.min = m;
	apps.push_back(ap);
}
mechanic::appointment mechanic::getapp(int i) {
	return apps[i];
}
vector<mechanic::appointment> mechanic::getapps() {
	return apps;
}
bool mechanic::isavailable(int h, int m) {
	for (int i = 0; i < apps.size(); i++) {
		if (apps[i].hour == h && apps[i].min == m) {
			return false;
		}
	}
	return true;
}