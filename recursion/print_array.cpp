#include<iostream>
using namespace std;

void displayArray(int arr[], int n, int idx) {
   if(idx == n) return;
   else {
      cout << arr[idx] << " ";
      displayArray(arr, n, idx+1);
   }
}

void displayArrayReverse(int arr[], int n, int idx) {
   if(idx == n) return;
   else {
      displayArrayReverse(arr, n, idx+1);
      cout << arr[idx] << " ";
   }
}

int main() {

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    displayArray(arr, n, 0);
    cout << endl;
    displayArrayReverse(arr, n, 0);
    cout << endl;
    return 0;
}