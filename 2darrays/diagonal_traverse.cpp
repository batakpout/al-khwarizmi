#include<iostream>
using namespace std;
/*
20 27 15 29 13 22
17 30 25 18 11 28
26 21 14 23 19 12
24 16 29 10 27 18
15 22 11 26 30 17
13 28 19 25 16 21
*/
int main() {

    cout << "enter size of matrix:" << endl;
    int r,c;
    cin>>r>>c;

    int arr[r][c];
    cout << endl << "Enter array elements:" << endl;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }

    cout << "Diagnal traversal:" << endl;

    for(int d=0;d<c;d++) {

       for(int i=0, j=d;j<c;i++,j++) {
          cout << arr[i][j] << " ";
       } 
       cout << endl;
    }


    return 0;
}