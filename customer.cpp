#include "customer.h"
customer::customer() {}
customer::customer(string n, int i, int a) {
	name = n;
	id = i;
	age = a;
}
void customer::setmname(string m) {
	mname = m;
}
void customer::sethour(int h) {
	app.hour = h;
}
void customer::setmin(int m) {
	app.min = m;
}
string customer::getmname() {
	return mname;
}
int customer::gethour() {
	return app.hour;
}
int customer::getmin() {
	return app.min;
}
bool customer::operator < (customer x) {
	if (app.hour < x.gethour() || app.hour == x.gethour() && app.min < x.getmin()) {
		return true;
	}
	else {
		return false;
	}
}
bool customer::operator > (customer x) {
	if (app.hour > x.gethour() || app.hour == x.gethour() && app.min > x.getmin()) {
		return true;
	}
	else {
		return false;
	}
}
bool customer::operator == (customer x) {
	if (app.hour == x.gethour() && app.min == x.getmin()) {
		return true;
	}
	else {
		return false;
	}
}