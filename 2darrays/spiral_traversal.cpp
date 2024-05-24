#include<iostream>
#include <chrono>
#include <thread>
using namespace std;
/**
 try with r=5, c=7 = 35
 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45

*/

//TC: O(r * c),

//todo: work on this, how this works
void spiral_print(int a[][1000], int m, int n) {
    
  
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = n - 1;
 
    while (startRow <= endRow && startCol <= endCol) {
        for (int i = startRow; i <= endRow; i++) {
            cout << a[i][startCol] << ", ";
        }
        startCol++;
 
        for (int i = startCol; i <= endCol; i++) {
            cout << a[endRow][i] << ", ";
        }
        endRow--;
 
        if (endCol > startCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << a[i][endCol] << ", ";
            }
            endCol--;
        }
 
        if (endRow >= startRow) {
            for (int i = endCol; i >= startCol; i--) {
                cout << a[startRow][i] << ", ";
            }
            startRow++;
        }
    }
}

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

    int minc = 0;
    int minr = 0;
    int maxr = r-1;
    int maxc = c-1;
    int total = r * c;
    int count = 0;
    while(count < total) {

    
       /*cout << "minr: " << minr << endl;
        cout << "minc: " << minc << endl;
        cout << "maxr: " << maxr << endl;
        cout << "maxc: " << maxc << endl; 
        cout << "Count: " << count << endl;
        cout << "Total: " << total << endl; */
    

       //this_thread::sleep_for(chrono::milliseconds(1000)); // Sleep for 1000 milliseconds (1 second)


        for(int i=minr, j=minc; i <= maxr && count < total; i++) {
            cout << arr[i][j] << endl;
            count++;
        }
        minc++;

        for(int i=maxr, j=minc; j <= maxc && count < total; j++) {
            cout << arr[i][j] << endl;
            count++;
        }
        maxr--;

        for(int i=maxr, j=maxc; i >= minr && count < total; i--) {
            cout << arr[i][j] << endl;
            count++;
        }
        maxc--;

        for(int i=minr, j=maxc; j >= minc && count < total; j--) {
            cout << arr[i][j] << endl;
            count ++;
        }
        minr++;

        }
        return 0;

}