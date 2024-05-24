/**
 Span of an arrays is the diff b/w its max and min element
*/

#include<iostream>
using namespace std;

//TC: O(n)
int spanOfArray(int arr[], int n) {
    
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<n;i++) {
      if(arr[i] > max) max = arr[i];
      if(arr[i] < min) min = arr[i];
    }
    return max - min;
    
}

int main() {
    
    int arr [] = {12, 33, 2, 44, 16, 4};
    int n = sizeof(arr)/sizeof(int);


    int span = spanOfArray(arr, n);
    cout << endl;
    cout << "Span: " << span;
    cout << endl;

    return 0;
}