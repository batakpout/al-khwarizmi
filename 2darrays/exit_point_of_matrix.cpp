#include<iostream>
using namespace std;
/*
 r=4, c=4
 0 0 1 0 
 1 0 0 0 
 0 0 0 0 
 1 0 1 0
 i=1, j=3
*/
//O(r*C)
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

   int dir=0;
   int i=0, j=0; 
   while(true) {

    dir = (dir + arr[i][j]) % 4;
    if(dir==0) j++; //E
    else if(dir==1) i++; //S
    else if(dir==2) j--; //W
    else if(dir==3) i--; //N

     if(i < 0) {
        i++;
        break;
     } else if(i==r) {
        i--;
        break;
     } else if(j<0) {
        j++;
        break;
     } else if(j==c) {
        j--;
        break;
     } 

   } 

   cout << endl << "Exit points: i = " << i << ", j = " << j << endl;
   return 0;

}