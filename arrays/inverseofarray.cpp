
#include<iostream>
using namespace std;
//TC: O(N) , SC: O(N)
int* inverse(int arr1[], int n) {
    /**
     int arr2[n]; gives garbage value in main once returned from here why?
     In C++, when you declare an array inside a function like int arr2[n];,
     it's allocated on the stack. This means that the memory allocated for the array 
     is deallocated once the function exits. Therefore, returning a pointer to this 
     array from the function leads to undefined behavior because you're accessing
     memory that is no longer valid.
     On the other hand, using new int[n] dynamically allocates memory from the heap. 
     Memory allocated on the heap persists until it's explicitly deallocated using 
     delete[]. This allows the memory allocated for the array to remain valid even 
     after the function exits
    */
   //int arr2[n] NOOOOOO
  int* arr2 = new int[n]; // dynamically allocate memory for arr2 at runtime
   for(int i=0;i<n;i++) {
      int v = arr1[i];
      arr2[v] = i;
   }
  return arr2;
}

int main() {
    
   int n;
   cout << endl;

   cout << "enter size of array:" << endl;
   cin>>n;

   cout << endl << "enter array:" << endl;
   int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    int *res = inverse(arr, n);
   cout << endl << "inverse array:" << endl;

   for(int i=0;i<n;i++)
    cout << res[i] << " ";
    
    cout << endl;

    /**
        C++ does not have automatic garbage collection like some other languages 
        such as Java or Python. In C++, when you allocate memory dynamically using new,
        it's your responsibility to deallocate that memory when you're done using it.
        Failing to do so can lead to memory leaks, where memory that is no longer needed
        is not released back to the system, eventually consuming all available memory
        and causing your program to crash.
    */

   /**
        The delete[] operator is used to explicitly deallocate memory that was dynamically
        allocated with new[]. It's important to use delete[] to free the memory once you've
        finished using it, otherwise, the memory will remain allocated until the program
        terminates.
   */
    delete[] res;

    return 0;
}