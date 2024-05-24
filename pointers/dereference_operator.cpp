/*
  & Bucket  => Address
  * Address => Bucket back 
  Deference-operator: If we want to access a value through it address.
  * An interested property of pointers is that they can be used to access the variable
    they point to directly, by preceding pointer name with * operator. The operator itself can
    be read as "value pointed to by"

  * use case: we pass address of variable to the function
    and you want to use its value then dereference operator is helpful in doing so.
*/
#include<iostream>
using namespace std;
int main() {

  int x = 10; 

  int *xptr = &x;

  int xBack = *xptr;

  cout << endl << xptr << endl;
  cout << endl << xBack << endl;
  cout << endl << *(&x) << endl; //same as above

  // Null Ptr i.e make our pointer point to nothing i.e not pointing to any bucket, sometimes useful.
  int *p=0; // create p in memory but doesn't point to anything
  int *q = NULL;  //same here, has to be capital NULL

  cout << endl << p << endl;
  cout << endl << q << endl;

  cout << endl << *p << endl; //Segmentation fault: 11 as it does not point to any bucket
  cout << endl << *q << endl; //Segmentation fault: 11 same here
  return 0;
}