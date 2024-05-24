#include<iostream>
#include<vector>
using namespace std;

int main() {
   
   vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8};

    // Reversing the vector using std::reverse
    int n = 8;
    int k = 3;
    //reverse(myVector.begin(),myVector.begin()+(n-k));
    reverse(myVector.begin() +(n-k),myVector.end()); //end is open interval

    // Printing the reversed vector
    cout << "Reversed vector: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    cout << endl;

    ///floor division test

    cout << floor((double)10/3) << endl;  


    return 0;

}