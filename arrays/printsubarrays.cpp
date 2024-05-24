/**
  A subarray is a contiguous part of the array. An array that is inside another array. 
  For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays.
  The subarrays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4). 
  In general, for an array/string of size n, there are n*(n+1)/2 non-empty subarrays/substrings.
*/

/**
Subarray: A contiguous portion of an array.
Subset: A collection of elements chosen from a set, not necessarily contiguous.
Subsequence: A new sequence formed by deleting some elements from the original sequence, 
  without changing the order of the remaining elements.
  abcde is abc as sub-seq but not abcde //todo: check about sub-sequence?
*/
#include<iostream>
using namespace std;
//TC:  approximately O(n^3) 
void printSubArrays(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=i; j<n;j++) {
            for(int k=i;k<=j;k++) {
              cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

//using str cuts-down complexity to O(N*N)
void printSubarrays2(int arr[], int n) {

    for(int i = 0; i < n;i++) {
      string str = "";
      for(int j = i; j < n; j++) {
        str = str + " " + to_string(arr[j]);
        cout << str << endl;
    }
		    cout << endl;
  } 
}

int main() {
    
    int arr [] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    cout << endl;
    printSubarrays2(arr, n);
    return 0;

}