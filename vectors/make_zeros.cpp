/**
 * Make Zeroes
Given a two-dimensional array, if any element within is zero, make its whole row and column zero. For example, consider the matrix below.
Sample Input:
{ {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4} }

Sample Output:
{ {5, 0, 3, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {9, 0, 3, 0} }
*/
#include<iostream>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> &arr) {

    vector<int> r,c;
    int n = arr.size(), m = arr[0].size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                r.push_back(i);
                c.push_back(j);
            }
        }
    }
    
    for(auto x : r){
        for(int i=0; i<n; i++){
            arr[x][i] = 0;
        }
    }

    for(auto x : c){
        for(int i=0; i<n; i++){
            arr[i][x] = 0;
        }
    }
    
    return arr;
}

int main() {

  vector<vector<int>> v = { {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4} };
  
  vector<vector<int>> res = makeZeroes(v);

  for(int i=0;i<res.size();i++) {
    for(int j=0;j<res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
  }

  cout << endl;
  return 0;
}