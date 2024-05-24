/**
 Criteria: 
 1. Integers in each row are sorted from left to right.
 2. The first integer of each row is greater than the last integer
    of the previous row. i.e full 2d array is sorted from start to end

1  3  5  7  9
10 20 24 29 34
38 40 44 49 53
60 61 65 68 74
78 80 85 90 92

Approach:
1. to find potential row
2. find target in this potential row

TC: O(Log R + Log C) i.e O(Log (R*C)), R= n(rows) and C = n(column)
*/
#include<iostream>
using namespace std;

int binarySearchRowSelect(vector<vector<int>> arr, int target, int r, int c) {
   int s=0;
   int e = r-1;
   while(s<=e) {
    int mid = s + (e-s)/2;
      /* cout << endl << "s = " << s << endl;
      cout << endl << "e = " << e << endl;
      cout << endl << "mid = " << mid << endl; */
    if(target >= arr[mid][0] && target <= arr[mid][c-1]) return mid;
    else if(target > arr[mid][c-1]) s = mid + 1;
    else if(target < arr[mid][0]) e = mid-1;
/*     cout << endl << "--------------------------------" << endl;
      cout << endl << "s = " << s << endl;
      cout << endl << "e = " << e << endl; */
   }
   return -1;
}

int binarySearch(vector<vector<int>> arr, int foundRow, int target, int c) {
    int s = 0;
    int e = c-1;
    
    while(s <= e) {
      int mid = s + (e-s)/2;
/*       cout << endl << "s = " << s << endl;
      cout << endl << "e = " << e << endl;
      cout << endl << "mid = " << mid << endl; */
      if(arr[foundRow][mid] == target) return true;
      else if(arr[foundRow][mid] > target) e = mid-1;
      else if(arr[foundRow][mid] < target) s = mid + 1;  

    /*cout << endl << "--------------------------------" << endl;
      cout << endl << "s = " << s << endl;
      cout << endl << "e = " << e << endl;
      cout << endl << "mid = " << mid << endl; */
    }
    return false;
}

bool search(vector<vector<int>> arr, int target, int r, int c) {
   int row = binarySearchRowSelect(arr, target, r, c);
   //cout << endl << "row=" << row << endl;
   if(row == -1) return false;
   return binarySearch(arr, row, target, c);
   
}
int main() {
    
    cout << "Enter r, c:" << endl;
    int r, c;
    cin >> r >> c;

    vector<vector<int>> arr(r, vector<int>(c));

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> arr[i][j];

    int target;
    cout << endl << "Enter target:" << endl;
    cin>>target;    

    bool res = search(arr, target, r, c);   
    cout << endl << (res==1 ? "found" : "not found") << endl;
}