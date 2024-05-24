#include<iostream>
using namespace std;

void printBarChart(int arr[], int n) {
   int max = arr[0];
   
   for(int i=1;i<n;i++) {
    if(arr[i] > max) max = arr[i];
   }

  for(int floor = max; floor >=1; floor--) {
    for(int i=0;i<n;i++) {
        if(arr[i] >= floor)
         cout << "*\t";
        else cout <<"\t"; 
    }
    cout << endl;
  }

}

int main() {
    cout << endl;

    int arr [] = {3,1,0,7,5};
    int n = sizeof(arr) / sizeof(int);
    printBarChart(arr, n);

    cout << endl;

}

/**
 The first loop iterates over the array to find the maximum value, which takes O(n) time.
 The second loop takes O(n * max)
 overall time complexity is O(n) +  O(n * max)
 It's worth mentioning that if the maximum value is significantly larger than n, 
 the time complexity might be closer to O(n^2).
 However, if the maximum value is relatively small compared to n,
 the time complexity might be closer to O(n).
*/