/**
 * pointer variable contains address & size of address is 8 byte on 64-bit system irrespective 
   of whether pointer variable points to int or char or float,  8-byte address space.
*/
#include<iostream>
using namespace std;
int main() {

  int x = 10;
  double y = 5.4;

  cout << &x << endl; 

  int *xptr = &x;

  cout << xptr << endl; //same as cout above

  //address of a pointer variable

  //double *pdPtr; pointer to a double value

  cout << endl << &xptr << endl;
  int **xptrr = &xptr;

  cout << endl << xptrr << endl; // same as cout << &xptr

  return 0;
}