#include<iostream>
using namespace std;
/**
    else {
            //area for pre;
            eulerPath(n-1);  //left call
            //area for in;
            eulerPath(n-1); //right call
            //area for post
    }
*/
void eulerPath(int n) {
    if(n == 0) return;
    else {
        cout << "Pre: " << n << endl; 
        eulerPath(n-1);
        cout << "In: " << n << endl;
        eulerPath(n-1);
        cout << "Post: " << n << endl;
    }
}

int main() {

    cout << endl;
    eulerPath(2);
    cout << endl;
}