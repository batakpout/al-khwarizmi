#include<iostream>
using namespace std;


void print2DVector(const vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}


//O(N^2)
int main() {

    
    
    cout << "Enter N" << endl;
    int n;
    cin>>n;

    vector<vector<int>> arr = vector<vector<int>>(n, vector<int>(n));
    // we can avoid above and just use:--vector<vector<int>> arr(r, vector<int>(c)); this is enough
    for(int i=0;i<n;i++) {
        arr[i].resize(i + 1);
         for(int j=0;j<=i;j++) {
            if(j==0 or j==i) arr[i][j] = 1;
            else {
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            }
        }
    }

    print2DVector(arr);
    cout << endl;
    return 0;
}