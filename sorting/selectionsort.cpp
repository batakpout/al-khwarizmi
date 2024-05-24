#include<iostream>
using namespace std;
/**
 * key idea: repeatedly find the minimum element from the
   unsorted part and putting it at the begining.
 * Selection Sort Algorithm is an in-place algorithm, as it does not require extra space.  
 * The selection sort never makes more than O(N) swaps and can be useful when memory writing is costly. 
 * Advantages of Selection Sort Algorithm
    Simple and easy to understand.
    Works well with small datasets.  
 * Disadvantages of Selection Sort Algorithm
    Selection sort has a time complexity of O(n^2) in the best, worst and average case.
    Does not work well on large datasets.
    Does not preserve the relative order of items with equal keys which means it is not stable.
    //todo: implement a stable selection sort?
*/

//TC: O(N^2)
vector<int> selectionSort(vector<int> arr) {
  int n = arr.size();
  int minIdx;
  for(int i=0;i<n-1;i++) {
    minIdx = i;
    for(int j=i+1;j<n;j++) {
      if(arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    if(minIdx != i) swap(arr[i], arr[minIdx]);
  }

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
   vector<int> res = selectionSort(arr);
    for(int i=0;i<n;i++) {
    cout << res[i] << " ";
   }
   cout << endl;

    return 0;
}

