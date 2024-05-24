#include<iostream>
using namespace std;

int main() {

    cout << "Enter 2d array size: " << endl;
    int r,c;
    cin>>r>>c;

    int arr[r][c];
    cout << endl << "Enter array elements: " << endl;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
             cin>>arr[i][j];
        }
    }

//O(r*c)
   for(int j=0;j<c;j++) {

      if(j%2 == 0) {
        for(int i=0;i<r;i++) {
            cout << arr[i][j] << endl;
        }
      } else {
        for(int i= r-1;i>=0;i--) {
            cout << arr[i][j] << endl;
        }
      }
   }
    return 0;
}