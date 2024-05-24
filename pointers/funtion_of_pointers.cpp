#include<iostream>
using namespace std;

//taste of functional programming
int func1() {
    return 1;
}

int func2() {
    return 2;
}

/*
* In C and C++, function parameters don't necessarily need to have identifiers in their declarations.
* The function doesn't use these arguments, as there are no identifiers associated with them. You would typically use identifiers 
  if you want to refer to these arguments within the function body. If the function doesn't use the arguments, it's common to omit
  the identifiers as a way to indicate that the arguments are not used.
*/

//separate example from what is in main
int ** fun(float*, char**) {
    int ** a = new int*[10];
    return a;
}

int main() {

    // Declaration of the array of function pointers
     int (*p[5])();

    // Assigning function pointers
    p[0] = func1;
    p[1] = func2;

    // Calling functions through pointers
    int result1 = p[0](); // Calls func1
    int result2 = p[1](); // Calls func2

    cout << endl<< "func1-result: " << result1 << endl; 
    cout << endl<< "func2-result: " << result2 << endl; 


    return 0;
}