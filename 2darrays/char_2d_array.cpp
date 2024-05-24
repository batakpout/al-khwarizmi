#include<iostream>
using namespace std;

void print(char arr [][100], int n, int m) { // col size of caller must match 100
     for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    char arr[100][100];
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
    print(arr, n, m); //arr col size match 100 
    cout << endl << "some other way to do char arr:" << endl;

    char letters[100][100] = {
        "one", // represented as 1d arr with values a , b , c
        "two",
        "thr"
    };
    print(letters, 3, 3);
    cout << endl << "Another way to print char arr" << endl;
     for(int i=0;i<3;i++) {
            cout << letters[i] << endl; //letter[i] address, doesn't work for int arr
        }
    return 0;
}