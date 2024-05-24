/*
 Refer to the screenshot to understand why there will
 either be only one saddle point in a matrix or none.
*/
#include<iostream>
using namespace std;
/**
 TC: O(r^2 * c)
*/


int findSaddlePoint(vector<vector<int>> arr, int r, int c) {
    
    for(int i=0;i<r;i++) {
       int L=0; 
      for(int j=1;j<c;j++) {

        if(arr[i][j] < arr[i][L]) {
            L = j;
        }
      }

        bool isGreater=true;
        for(int k=0;k<r;k++) {
            if(arr[k][L] > arr[i][L]) {
                isGreater=false;
                break;
            }
        }

        if(isGreater) return arr[i][L];

    }
    cout << endl << "No saddle point found" <<endl;
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

  int result = findSaddlePoint(arr, r, c);
  cout << endl << "Saddle point: " << result << endl;
  return 0;
  
}