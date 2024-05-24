#include<iostream>
using namespace std;
//try rowLength = arr.length - 1, col = arr[0].length-1
void print(int arr[][100], int n, int m) { //must to mention col size otherwise it won't work
     for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int arr[100][100];
    int n,m;
    cout << "Enter 2d array row, col size:" << endl;
    cin>>n>>m;
    cout << "Now enter array elements:" << endl; 
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Printing array elemenets entered:" << endl;
    print(arr, n, m);
    return 0;
}
