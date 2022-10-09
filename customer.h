#pragma once
#include "person.h"
class customer :
    public person
{
private:
    string mname; // Mechanic name
    appointment app;
public:
    customer();
    customer(string n, int i, int a);
    void setmname(string m);
    void sethour(int h);
    void setmin(int m);
    string getmname();
    int gethour();
    int getmin();
    bool operator < (customer x);
    bool operator > (customer x);
    bool operator == (customer x);
};

