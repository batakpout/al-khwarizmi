#include<iostream>
/**
 * When you include a header file in your source code, you're essentially telling the compiler to copy the
   contents of that header file into your source file before compiling it
*/
#include "vector.h"
using namespace std;

int main() {

    Vector<int> v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << endl << "size-1: " << v.size()  << endl;
    cout  << "capacity-1: " << v.capacity() << endl;
    v.push_back(6);

    cout << "size-2: " << v.size() << endl;
    cout <<  "capacity-2: " << v.capacity() << endl;

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.last() << endl;

    cout << "value at 0: " << v.at(0) << endl;
    cout << "value at 121: " << v.at(121) << endl; //some garbage or 0

    for(int i=0;i<v.size();i++) {
        cout << v[i] << " "; //v[i] due to operator overloading method defined in vector.h
    }

    v.pop_back();
    v.pop_back();


    cout << endl;
    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << endl << "---char vector---" << endl;
    Vector<char> vc(5);
    vc.push_back('a');
    vc.push_back('b');

    cout << endl;
    for(int i=0;i<vc.size();i++) {
        cout << vc[i] << " ";
    }
    cout << endl;

    return 0;
}