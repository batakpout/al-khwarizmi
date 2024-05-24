#include<iostream>
using namespace std;

/**
 Time Complexity: O(n) 
 Space Complexity: O(n)
*/
int factorial(int n) {
    if(n == 1) return 1;
    else return n * factorial(n-1);
}

int main() {

    cout << "enter n: " << endl;
    int n;
    cin>>n;
    int fact = factorial(n);
    cout << endl << fact << endl;
    return 0;
}