#include<iostream>
using namespace std;

int maxOfArray(int arr[], int n, int idx) {
   if(idx == n-1) return arr[idx];
   else {
      int res = maxOfArray(arr, n, idx + 1); // never use idx++ here
      if(res > arr[idx]) return res;
      else return arr[idx];
   }
}


int main() {

    int arr[] = {11,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    int max = maxOfArray(arr, n, 0);
    cout << endl;
    cout << "max: " << max << endl;
    cout << endl;
    return 0;
}