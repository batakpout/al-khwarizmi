#include<iostream>
using namespace std;

void reverse_array(int arr[], int n) {
    
  int s = 0;
  int e = n - 1;
  while(s < e) { //N/2, ignore constants so O(N) time complexity, O(1) space complexity
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
    
}

int main() {
    
    int arr [] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr)/sizeof(int);


    reverse_array(arr, n);
    cout << endl;
    for(int i=0;i<n;i++) 
     cout << arr[i] << ",";
    return 0;

}