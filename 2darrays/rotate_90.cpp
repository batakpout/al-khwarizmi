#include<iostream>
using namespace std;
/*
  * transpose and then reverse each row
  * Combining three parts, the overall time complexity of your code is O(r * c), 
    which is determined by the most expensive operation (initializing the 2D array and reversing each row).
  * In the case where r and c are equal(i.e., a square matrix), the TC can be simplified to O(n^2), 
    where n is the size of the square matrix.
*/

int main() {
    cout << "enter size of matrix:" << endl;
    int r,c;
    cin>>r>>c;

    int arr[r][c];
    //O(r*c)
    cout << endl << "Enter array elements:" << endl;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }

    /* cout << endl << "Entered array elements: " << endl;
   for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } */

    //transpose first:O((r * c) / 2)
    int temp;
    for(int i=0;i<r;i++) {
        for(int j=i;j<c;j++) {
          temp=arr[i][j];
          arr[i][j] = arr[j][i];
          arr[j][i] = temp;
        }
    }

  /*  cout << endl << "transposed:" << endl;
   for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } */

    //reverse each row  O(r * c)
    for(int i=0;i<r;i++) {
        int s=0;
        int e = c-1;
        while(s<e) {
            temp=arr[i][s];
            arr[i][s] = arr[i][e];
            arr[i][e] = temp;
            s++;
            e--;
        }
    }

   cout << endl << "Rotated by 90:" << endl;
   for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}