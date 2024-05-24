// C++ program for calculating mid of array
#include <iostream>
using namespace std;
 
// driver program
int main(){
    /**
     start = 2147483647
     end = 2147483647
    */

      int start = INT_MAX, end = INT_MAX;
      cout<<"start = "<<start<<endl;
      cout<<"end = "<<end<<endl;
 
    // method 1
    int mid1 = (start + end) / 2;
      cout<<"mid using (start + end)/2 = "<<mid1<<endl;
 
    // method 2
    int mid2 = start + (end - start) / 2;
      cout<<"mid using start + (end - start)/2 = "<<mid2<<endl;
    return 0;
}