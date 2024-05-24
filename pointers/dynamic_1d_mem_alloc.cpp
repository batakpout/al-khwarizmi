#include<iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter n:" << endl;
    cin>>n;
  
   int * arr = new int[n];
   cout << endl << "Dynamic array address:" << arr << endl; 
   for(int i=0;i<n;i++) {
    arr[i] = i;
    cout << arr[i] << " ";
   }

  cout << endl;  
  delete [] arr; 
  cout << endl << "Dynamic array address after dealloc:" << arr << endl; // invalid now but not immediately wiped out
  cout << endl << arr[4] << endl; // no longer exist, undefined behaviour, potential crash
  return 0;

  /**
     Note:
     int *ptr = NULL; 
     delete ptr;
   * Deleting a null pointer has no effect, so it is not necessary to check for a null pointer before calling delete.
  */
}