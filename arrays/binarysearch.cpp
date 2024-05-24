#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    
  int s = 0;
  int e = n - 1;
  while(s <= e) {
    int mid = s + (e-s)/2; //to prevent integer overflow
    
    if(arr[mid] == key) return mid;

    if(arr[mid] > key) e = mid - 1;
    else  s = mid + 1;
  }
  return -1;
    
}

int main() {
    
    int arr [] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    int index = binary_search(arr, n, key);
    
    if(index != -1)
        cout << key << " is present at index " << index << endl;
    else
        cout << key << " is NOT found!" << endl;
    return 0;

}
/**
 * its fast and efficient but works only if our search space is
   monotonic (i.e non-increasing or non-decreasing)
 Time Complexity:

 N = N/2^0 = iteration 0

N/2 = N/2^1 = iteration 1

N / 4 = N/2^2 = iteration 2

1 = N/2^K (array size reduced ) = iteration K
 
N/2^K = 1
N = 2^K
K = LogN (Base 2)
O(LogN)
so the while loop above is gonna take LogN iterations

The variables s, e, and mid are simple integer variables that hold indices or values within the
array, and they do not scale with the size of the input array. Regardless of the size of the input
array, these variables consume a constant amount of memory. Therefore, the space complexity of
 the algorithm remains O(1)
*/

/**
 What happens if numbers are repeated in the array?
 eg. arr = {1,1,1,2,4}

 You can modify the code a little according to required criteria

 For example you want the minimum index, in the base condition 
 where arr[mid] == key, just check if arr[mid-1] is also equal to key,
 if not ,mid is the min index, but if arr[mid-1] == key, 
 then update e=mid-1 and do not break the loop.

 Similarly for max index you can check the mid+1
*/
