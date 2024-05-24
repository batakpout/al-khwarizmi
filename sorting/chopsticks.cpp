#include<iostream>
using namespace std;
/**
Given N sticks and an array arr where each arr[i] represents length of each stick. Your task is to make maximum number of 
pairs of these sticks such that the difference between the length of two sticks is at most x. A stick can't be part of 
more than one pair of sticks.

Input Format: an integer vector arr and number x is passed.
Output Format: Return an integer representing total number of such pairs.
Sample Input:{1, 3, 3, 9, 4}, x = 2
Sample Output:2
Explanation
(0th index, 1st index) and (2nd index, last index) can be paired together.
*/

//TC:O(N^2)
int chopsticks(vector<int> arr, int x) {
  int total = 0;
  int n = arr.size();
  int count = 0;
  for(int i=0;i<n-1;i++) {
    for(int j=i+1;j<n;j++) {
        if(arr[i] && arr[j]) {
           if(abs(arr[i]-arr[j]) <= x) {
              count++;
              arr[i] = arr[j] = 0;
           }
        }
    }
  }
  return count;
}


//TC: using sort O(N * Log N)
int chopsticksUsingSort(vector<int> arr, int x) {
  sort(arr.begin(), arr.end());
  int count = 0;
  for(int i = 0; i < arr.size() - 1; i += 2) {
    if(abs(arr[i] - arr[i + 1]) <= x) 
      count++;
  }
  return count;
}


int main() {

   int n,x;

   cout << endl << "enter size of array:" << endl;
   cin >> n;

   vector<int> arr(n);
   cout << "enter array elements:" << endl;
   for(int i=0;i<n;i++) {
    cin >> arr[i];
   }

   cout << endl;
   cout << "Enter diff: " << endl;
   cin >> x;
   cout << endl;
  // int res1 = chopsticks(arr,x);
   int res2 = chopsticksUsingSort(arr,x);
    
    //cout << res1;
    cout << endl;
    cout << res2;
    cout << endl;
    return 0;
}

