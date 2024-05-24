/*
* both rows and columns are sorted
* Approach-1: do Linear search on entire matrix: O(r*c)
* Approach-2: do binary search on each row: O(r * Log c)
* Approach-3: staircase search, start at last column of ist row: O(R+C)

4*4, find 33:
10 20 30 40
14 25 35 45
27 29 37 48
32 33 39 50
*/

#include<iostream>
using namespace std;

bool search(vector<vector<int>> arr, int key, int r, int c) {
   int i = 0;
   int j = c-1;
   while(i<r && j>=0) {
      if(arr[i][j] == key) return true;
      else if(arr[i][j] > key) {
        j--;
      } else {
        i++;
      }
   }
   return false;
}

int main() {
    cout << "Enter matrix size:" << endl;
    int r,c,key;
    cin>>r>>c;
    vector<vector<int>> arr(r, vector<int>(c));

    cout << "Enter matrix:" << endl;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> arr[i][j];
        }
    }

   cout << endl << "Enter element to search:" << endl;
   cin>>key;
   
    bool found=search(arr, key, r, c);
    cout << "Found: " << (found == 1 ? "true" : "false") << endl;
    return 0;
}