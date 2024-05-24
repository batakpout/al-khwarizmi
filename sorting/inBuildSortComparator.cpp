/**
 * The inbuilt sort function uses Introsort, which is a mixture of 3 sorting algorithms 
   (merge sort, quick sort and insertion sort), avg case TC is O(nlogn)
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b) {
    //cout << "comparing: " << a << " " << b << endl;
    //return a < b; // increasing order of sort
    return a > b; // non-increasing order of sort
}
int main() {

   int arr [] = {1,-1,-2,6,3,4,5,2};
   int n = sizeof(arr) / sizeof(int);

   //sort(arr, arr+n, compare); //[) interval
   sort(arr, arr+n, greater<int>()); //decreasing order
   //reverse(arr, arr+n);
    cout << endl;
    for(int i=0;i<n;i++) {
     cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

