#pragma once
#include "person.h"
#include <vector>
class mechanic :
    public person
{
private:
    int count;
    vector<appointment> apps;
public:
    mechanic();
    mechanic(string n,int i,int a);
    void setcount(int c);
    int getcount();
    void setapp(int h,int i);
    appointment getapp(int i); //to get a single appointment with parameter of index of that appointment
    vector<appointment> getapps(); //to get the whole vector
    bool isavailable(int h,int i);
};

