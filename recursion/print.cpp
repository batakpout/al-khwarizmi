#include<iostream>
using namespace std;
// /"Believe in your faith to meet your expectation" - Story of Recursion ;)
 /**
 Time Complexity: O(n) 
 Space Complexity: O(n)
*/

void printDecreasing(int n) {
    if(n == 0) return;
    else {
        cout << n << " "; 
        printDecreasing(n-1);
    }
}

void printIncreasing(int n) {
    if(n == 0) return;
    else {
        printIncreasing(n-1);
        cout << n << " "; 
    }
}

void printDecreasingIncreasing(int n) {
    if(n == 0) return;
    else {
        cout << n << " ";
        printDecreasingIncreasing(n-1);
        cout << n << " ";
    }
}

int main() {

    cout << "enter n: " << endl;
    int n;
    cin>>n;
    printDecreasing(n);
    cout << endl;
    printIncreasing(n);
    cout << endl;
   printDecreasingIncreasing(n);
    cout << endl;
    return 0;
}