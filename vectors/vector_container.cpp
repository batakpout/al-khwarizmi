/**
 * Vector is a dynamic array
 * When vector is full it will double itself i.e it will create a new array with double size and copy elements to it.
 * unlike arrays vectors r passed by value to a function, we can
   still pass them by reference if the need arises. i.e pass by value
   means we are sending a copy of vector not the actual vector.  
 * Just like arrays, vectors use contiguous storage locations means,
   its elements can be accessed directly in O(1) time.

  v[3] = *(100 + 3*4) , v->100, base address stored in Symbol table (all addresses stores in it by compiler, read-only table)

  unlike arrays, vector size can change dynamically with their storage being handled by the container.

  *push_back has TC O(1) but in some cases its O(N) when current V is full and doubling has
  to first copy element form old to new V and then push_back the new element i.e if I have a V
  of size N, then I will do O(N) work once at end when V is filled completely with N and O(1) for
  N-1 times , so Amortized time or average time complexity is O(1)

 *Amortized time is the way to express the time complexity when an algorithm has the very 
  bad time complexity only once in a while besides the time complexity that happens most of time.

*/

#include<iostream>
using namespace std;
    //arr.size = no of elements in it
    //arr.capacity = actual allocated memory or size of underlying memory
int main() {
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
    cout << endl << "Fill Constructor vector elements:" <<endl;
    for(int i=0;i<v.size();i++) {
      cout << v[i] << " ";
    }
    cout << endl;

       // Reversing the vector using std::reverse
       /**
       When using reverse(myVector.begin(), myVector.begin() + (n - k)),
       it starts from the beginning and reverses elements up to,
       but not including, the element at index (n - k). So, it reverses 
       elements from index 0 up to index (n - k - 1).
       For example, if n = 8 and k = 3, then (n - k) equals 5.
       The reverse function will reverse elements from index 0 up to
       index 4. Therefore, it reverses the first 5 elements of the
       vector, not the first 4.
       regarding: reverse(myVector.begin() + (n - k), myVector.end());
       If n = 8 and k = 3, then (n - k) equals 5. So, it starts the
       reversal from the 6th element of the vector (index 5).
       */
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    //reverse(myVector.begin(), myVector.begin() + 2); // open ended at end
    reverse(myVector.begin() + 2, myVector.end());
    // Printing the reversed vector
    cout << "Reversed vector: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    cout << endl << "2D array space:" << endl;

 /*
 Shit, can't do this:
    int arr[][] = {
      {1,2}, 
      {1,2,3}, 
      {1,2,3,4}
   }

   */

  //with 2d vectors u can

  vector<vector<int>> vec = {
      {1,2}, 
      {1,2,3}, 
      {1,2,3,4}
   };


   for(int i=0;i<vec.size();i++) {
    //for(int j=0;j<vec[i].size();j++) { 
      for(int elem : vec[i]) { //each element in single dimension array at address v[i]
      cout << elem << " ";
    }
   }
    cout << endl;

    cout << "zara hatke: " << endl;
      int myints[] = {10,20,30,30,20,10,10,20};
      vector<int> v2(myints,myints+8); 

      for(int i=0;i<v2.size();i++) {
          cout << v2[i] << " ";
      }
      cout << endl;
      return 0;
}