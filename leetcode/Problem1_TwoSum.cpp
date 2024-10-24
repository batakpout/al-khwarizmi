#include<iostream>
#include<map>
#include<unordered_set>

using namespace std;

/**
Input: nums = [2, 4, 6, 9, 15, 16, 18], target = 15
Output: [2,3]

[ ((0, 13), (1, 11), (2, 9) , )  ]
[ ((13, 0), (11, 1), (9, 2) , )  ]
there are n*(n-1)/2 total pairs

*/

void print(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printSet(const unordered_set<int>& set) {
    for(const auto& elem: set) {
        cout << elem << ' ';
    }
        cout << endl;

}

/**
TC: O(n²), for using two nested loops
AS: O(1)
*/
pair<int, int> twoSumUsingArrays(int arr [], int n, int target) {

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]+ arr[j] == target) {
               return {i, j};
            } 
        }
    }
     return {-1, -1}; 
}



int binarySearch(int arr[], int left, int right, int target) {
  
    while(left <= right) {
        int mid = left + (right-left) / 2;
        if(arr[mid] == target) return true;
        if(arr[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}


/*
  its a bit complicated with maps, simple with hashsets
  TC: O(n)
  Auxillary space: O(n)
*/
void twoSumUsingMap(int arr [], int n, int target) {
    map<int, int> myMap;
    for(int i=0;i<n;i++) {
        auto it = myMap.find(arr[i]);
        if(it != myMap.end()) {
            cout << it -> second << "," << i;
            break;
        }
        myMap[target-arr[i]] = i;
    }
}

/**
  TC: sort-> O(N LogN), binary search -> O(Log N), arr traverse -> O(N) 
  so, binary search + traverse -> O(N Log N)
  total: O(N logN) + O(N log N)
  AS: O(1)
 */
bool twoSumUsingBinarySearch(int arr [], int n, int target) {
    
     sort(arr, arr + n);
     
     for(int i=0;i<n;i++) {

        int complement = target - arr[i];
        if(binarySearch(arr, i + 1, n, complement)) return true;
     }
     return false;
}

/**
 TC: sort -> O(N Log N), no traverse complexity becoz we don't traverse whole array
 AS: O(1)
 This approach is the best approach for a sorted array. But if array is not sorted, then we use hashing.
 */

bool twoSumUsingTwoPointers(int arr [], int n, int target) {
    
     sort(arr, arr + n);
     int left = 0, right = n - 1;
     while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) return true;
        else if(sum > target) right--;
        else left++;
     }
     return false;
}

/**
  unordered_set is essentially a hashset. It stores elements in hashtable.
  It allows for O(1) for lookups, insertions and deletions.

  TC: O(N)
  AS: O(N)
 */
bool twoSumUsingHashing(int arr [], int n, int target) {
   
    unordered_set<int> set;
    for(int i=0;i<n;i++) {
        if(set.find(target-arr[i]) != set.end()) return true;
        
        set.insert(arr[i]);
    }

    return false;
   
}

int main() {

   int arr [] = {1,7,62,61,9,13};
   int n = sizeof(arr) / sizeof(int);
   cout << endl;

  bool res = twoSumUsingHashing(arr, n, 15);
  cout << res << endl;
  cout << (res ? "true" : "false") << endl;
// twoSumUsingMap(arr, n, 15);
//    pair<int, int> result = 

//     if (result.first != -1) 
//         cout << "Indices: " << result.first << ", " << result.second << endl;
//      else 
//         cout << "No two sum solution found: " << result.first << result.second << endl;

//     return 0;
}
