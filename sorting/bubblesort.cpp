#include<iostream>
using namespace std;
/**
 * key idea: take the larger element to the end by repeatedly 
   swapping the adjacent elements.
 * Advantages of Bubble Sort:
    Bubble sort is easy to understand and implement.
    It does not require any additional memory space: in-place.
    It is a stable sorting algorithm, meaning that elements with the same key 
    value maintain their relative order in the sorted output.
 * Disadvantages of Bubble Sort:
   It has a time complexity of O(N2) which makes it very slow for large data sets.
   It is a comparison-based sorting algorithm, which means that it requires a comparison operator
   to determine the relative order of elements in the input data set, so, 
   it can limit the efficiency of the algorithm in certain cases.
 * O(N) if the array is already sorted else O(N^2)
 * Complexity Type	  Complexity
   Time Complexity	  Best: O(n) Average: O(n^2) Worst: O(n^2)
   Space Complexity	Worst: O(1)
*/

bool compare(int a, int b) {
    //return a > b; // non-increasing order of sort
    return a < b; // increasing order of sort
}

vector<int> bubbleSort(vector<int> arr) {
  bool swapped;
 // int c  = 0;
  int n = arr.size();
  for(int i=0;i<n-1;i++) {
    swapped = false;
   for(int j=0;j < n-i-1;j++) {
    if(arr[j] > arr[j+1]) {
   // if(compare(arr[j], arr[j+1])) {
     swap(arr[j], arr[j+1]);
     //c++;
     swapped = true;
    }
   }
   if(swapped ==false) break;
  }
  //cout << endl << "total swaps: " << c << endl;
  return arr;
}

int main() {

   int n;

   cout << endl << "enter size of array:" << endl;
   cin >> n;
   vector<int> arr(n);

   
   cout << "enter array elements:" << endl;
   for(int i=0;i<n;i++) {
    cin >> arr[i];
   }
  cout << endl;
  cout << "Sorted array:" << endl;
   vector<int> res = bubbleSort(arr);
    for(int i=0;i<n;i++) {
    cout << res[i] << " ";
   }
   cout << endl;

    return 0;
}

