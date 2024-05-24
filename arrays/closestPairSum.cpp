#include<iostream>
using namespace std;
/**
 * Given a sorted array and a number x, find a pair in an array whose sum is closest to x.
    Input: arr[] = {10, 22, 28, 29, 30, 40}, x = 54
    Output: 22 and 30
*/
//O(N^2)
void closestPairSum1(int arr[], int n, int x) {

  int diff=INT_MAX;
  int left=0, right=0;
  int sum = 0;
  for(int i=0;i<n-1;i++) {
    for(int j=i+1;j<n;j++) {
        sum = abs(arr[i] + arr[j] - x);
        if(sum < diff) {
            left = arr[i];
            right = arr[j];
            diff = sum;
        }
    }
  }
  cout << endl << "Closest sum pair(left, right): " << left << "," << right << endl;  
}

//O(N) two pointer technique
pair<int, int> closestSum(vector<int> arr, int x) {
    
    int diff = INT_MAX;
    int p1 = 0, p2, currSum = 0;
    int s = 0, e = arr.size() - 1;

    while (s < e) {
        currSum = arr[s] + arr[e];
        if(abs(currSum - x) < diff) { 
            diff = abs(currSum - x);
            p1 = arr[s];
            p2 = arr[e];
        }
        if (currSum < x) {
            s++;
        } else {
            e--;
        }
    }
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    return {p1, p2};
}

int main() {
    int n, x;
   cout << endl;

   cout << "enter size of array:" << endl;
   cin>>n;

   cout << "enter x:" << endl;
   cin>>x;

   
   cout << endl << "enter sorted array:" << endl;
//    /// Resize the vector to the required size using (n) else u will get 
/**
 * 
The issue causing the "Segmentation fault: 11" error in your program is 
likely due to the fact that you are accessing elements of a vector arr
 without resizing it first. Vectors in C++ don't automatically resize 
 themselves as elements are added. You need to use push_back() or 
 resize the vector to the required size before accessing its elements.
*/
   vector<int> arr(n);
    for(int i=0;i<n;i++) {  
        cin >> arr[i];
    }
    
    pair <int, int> closest = closestSum(arr, x);
    cout << "Closest sum pair to " << x << " is: " << closest.first << ", " << closest.second << endl;
    cout << endl;

}
