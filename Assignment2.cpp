#include <iostream>
#include <string>
#include <queue>
#include "person.h"
#include "customer.h"
#include "mechanic.h"
using namespace std;

int main()
{
    mechanic ayman, khaled, mai;
    ayman.setname("ayman");
    khaled.setname("khaled");
    mai.setname("mai");
    queue<mechanic> mechs;
    mechs.push(ayman);
    mechs.push(khaled);
    mechs.push(mai);
    int n;
    cout << "Enter number of customers: ";
    cin >> n;
    string tn; //temporary name placeholder
    int ti; //temporary int placeholder for entering hours and mins
    customer* c = new customer[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter customers name: ";
        cin >> tn;
        c[i].setname(tn);
        cout << "Enter hour: ";
        cin >> ti;
        c[i].sethour(ti);
        cout << "Enter minute: ";
        cin >> ti;
        c[i].setmin(ti);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < mechs.size(); j++) {
            
            if (mechs.front().isavailable(c[i].gethour(), c[i].getmin())) {
                mechs.front().setapp(c[i].gethour(), c[i].getmin());
                c[i].setmname(mechs.front().getname());
                mechs.push(mechs.front());
                mechs.pop();
                break;
            }
            else if (j == n - 1) {
                cout <<"Appoint for customer "<<c[i].getname()<<" will be canceled.";
                c[i].setmname("no");
                break;
            }
            mechs.push(mechs.front());
            mechs.pop();
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i-1; j++)
            if (c[j] > c[j + 1])
                swap(c[j], c[j + 1]);
    }
    queue<customer> cq;
    for (int i = 0; i < n; i++) {
        cq.push(c[i]);
    }
    for (int i = 0; i < n; i++) {
        if (cq.front().getmname() == "no") {
            cout << "No mechanics were found for: " << cq.front().getname() << endl;
            cq.pop();
            continue;
        }
        else {
            cout << cq.front().getname() << " should be assigned to " << cq.front().getmname() << " at " << cq.front().gethour() << ":" << cq.front().getmin() << endl;
            cq.pop();
            continue;
        }
    }
}
