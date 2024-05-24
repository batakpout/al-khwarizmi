#include<iostream>
using namespace std;
int main() {
    // << insertion operator
   //std is called as scope resolution
    cout << "Hello World!"; //cin , cout objects inside iostream, and use std out of iostream
    
    // string name;
    // cout << "enter ur name:";
    // cin >> name;
    // cout << endl << name << endl;
    string fullname;
    cout << "Enter ur full name:";
    getline(cin, fullname);
    cout << endl << fullname << endl;
    return 0;

}