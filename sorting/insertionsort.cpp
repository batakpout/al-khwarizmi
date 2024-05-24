#include<iostream>
using namespace std;
/**
  * Insertion sort is similar to playing cards in our hands.
  * Insert the card in its correct position in a sorted part.
  * It works by iteratively inserting each element of an unsorted list 
    into its correct position in a sorted portion of the list.
  * Best case: O(n), If the list is already sorted
  * Average case: O(n2), If the list is randomly ordered
  * Worst case: O(n2), If the list is in reverse order
  * Space Complexity: O(1) making it a space-efficient sorting algorithm(in-place).
  * Advantages of Insertion Sort:
        Simple and easy to implement.
        Stable sorting algorithm.
        Efficient for small lists and nearly sorted lists.
        space-efficient.
  * Disadvantages of Insertion Sort:
        Inefficient for large lists.
        Not as efficient as other sorting algorithms (e.g., merge sort, quick sort) for most cases.
*/
vector<int> insertionSort(vector<int> arr) {
  int n = arr.size();
  int curr, prev;
   for(int i = 1;i<n;i++) {
      int curr = arr[i];
      prev = i - 1;  
      while(prev >=0 && arr[prev] > curr) {
        arr[prev+1] = arr[prev];
        prev -=1;
      }
      arr[prev+1]=curr;
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
   vector<int> res = insertionSort(arr);
    for(int i=0;i<n;i++) {
    cout << res[i] << " ";
   }
   cout << endl;

    return 0;
}

