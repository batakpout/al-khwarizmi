#include<iostream>
using namespace std;


int main() {

    int x = 10;
    int &y = x; // y points to x memory;
    //int z = &x; can't do that , it should be int *z = &x;

    cout << endl << "x = " << x << ", y = " << y;

    x++;
    cout << endl << "x = " << x << ", y = " << y;
 
    y++;
    cout << endl << "x = " << x << ", y = " << y;

    cout << endl;
    return 0;
}