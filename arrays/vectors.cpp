#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
/**
 * Vector Container or Vector STL (standard template library)
 * Vector is a dynamic array
 * When vector is full it will double itself i.e
   it will create a new array with double size and copy elements to it.
 * unlike arrays vectors r passed by value to a function, we can
   still pass them by reference if the need arises. i.e pass by value
   means we are sending a copy of vector not the actual vector  
*/
int main() {

    //arr.size = no of elements in it
    //arr.capacity = actual allocated memory or size of underlying memory

    vector<int> arr1;
    cout << endl << "Size is: " << arr1.size() << endl;

    vector<int> arr2 = {1,2,3,4,5};
    cout << endl << "Size is: " << arr2.size() << endl;
   
    //initially capacity is same as items in vector
    cout << endl << "Capacity is: " << arr2.capacity() << endl;

    arr2.push_back(6); //prepends at O(1) constant time
    cout << endl << "Now size is: " << arr2.size() << endl;
    cout << endl << "Capacity is: " << arr2.capacity() << endl; //doubled now

    cout << endl << "printing vector elements:" <<endl;
    for(int i=0;i<arr2.size();i++) {
      cout << arr2[i] << " ";
    }

    cout << endl;
    arr2.pop_back(); // removes last element;
     cout << endl << "printing vector elements:" <<endl;
    for(int i=0;i<arr2.size();i++) {
      cout << arr2[i] << " ";
    }
    
    cout << endl;
    //lot of other method to explore e,g insert at middle, erase etc,
    // check documentation

    cout << "Fill Constructor to craete a vector:" << endl;
    vector<int> v(5,8);
    for(int i=0;i<v.size();i++) {
      cout << v[i] << " ";
    }
    cout << endl;
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    reverse(myVector.begin(), myVector.begin() + 2); // check in online compilers: 2 1 3 4 5 --open interval at last
   // reverse(myVector.begin() + 2, myVector.end()); // 1 2 5 4 3 
    // Printing the reversed vector
    cout << "Reversed vector: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;


}