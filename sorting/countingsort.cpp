#include<iostream>
using namespace std;
/**
*   works in linear time if data for this sort is in range
    e.g student marks [0 to 100], O(linear+range) i.e O(N + Range(largestElement))
*   It can be a stable algorithm.
*   Counting sort can also work for negative numbers. You just have to rebase the current range of numbers.
    e.g, if you have the range [-23, 54] we will rebase every number at number+min(Range) i.e number+23.
    So your range for the original code will become [-23+23,54+23] or [0,77]. 
    Now after applying the algorithm just replace every number in the sorted array by number -23.
*   Advantage of Counting Sort:
*   It has a time complexity of O(n + k) 
    When the range of input values (k) is relatively small compared to the number of elements (n), 
    counting sort can be more efficient than merge and quick sort because it doesn't rely on 
    comparisons between elements.
    It is easy to code.
*   Disadvantage of Counting Sort:
    It doesn’t work on decimal values.
    It is inefficient if the range of values to be sorted is very large.
    It is not an In-place sorting algorithm, It uses extra space for sorting the array elements.
*/

//TC: 
vector<int> countingSortStable(vector<int> arr) {
  
    int largest =  -1;
    int smallest = -1;
    int n = arr.size();
    for(int i=0;i<n;i++) {
    largest = max(largest, arr[i]);
    smallest = min(smallest, arr[i]);
    }

   //build frequency vector
    vector<int> freq (largest-smallest+1);
    for(int i=0;i<n;i++) {
       freq[arr[i] - smallest]++; 
    }

    //build prefix sum in same freq vector
    for(int i=1;i<freq.size();i++) {
        freq[i] = freq[i-1] + freq[i];
    }

    vector<int> res(n);

    for(int i=n-1;i>=0;i--) {
        int idx = arr[i]-smallest;
        res[freq[idx] - 1] = arr[i];
        freq[idx]--;
    }

  return res;
}

vector<int> countingSortUnstable(vector<int> arr) {
    int largest = -1;
    int n = arr.size();
    for(int i=0;i<n;i++) {
        largest = max(largest, arr[i]);
    }

    vector<int> freq(largest+1);
    for(int i=0;i<n;i++) {
        freq[arr[i]]++;
    }

    int j = 0;
    for(int i=0;i<=largest;i++) { // this runs range times
      while(freq[i] > 0) { // this runs at max number of elements in arr times so: O(range+N)
         arr[j] = i;
         freq[i]--;
         j++;   
      }
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
   //vector<int> res = countingSortUnstable(arr);
   vector<int> res = countingSortStable(arr);
    for(int i=0;i<n;i++) {
    cout << res[i] << " ";
   }
   cout << endl;

    return 0;
}

