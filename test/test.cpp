#include<iostream>
#include<vector>
using namespace std;
 
 void spiral(int r, int c, vector<vector<int>> arr) {
    
    int minr=0, minc=0, maxr=r-1, maxc=c-1;
    int total=r*c;
    int count=0;
    while(count<total) {

        for(int i=minr, j=minc; j <=maxc && count < total; j++) {
            cout << arr[i][j] << " ";
            count++;
        }
        minr++;

        for(int i=minr, j=maxc; i <=maxr && count < total; i++) {
            cout << arr[i][j]<< " ";
            count++;
        }
        maxc--;

        for(int i=maxr, j=maxc; j >=minc && count < total; j--) {
            cout << arr[i][j]<< " ";
            count++;
        }
        maxr--;

         for(int i=maxr, j=minc; i >=minr && count < total; i--) {
            cout << arr[i][j]<< " ";
            count++;
        }
        minc++;

    }

 }


int main() {
 
    cout << "Enter r, c:" << endl;
    int r, c;
    cin >> r >> c;

    vector<vector<int>> arr(r, vector<int>(c));

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> arr[i][j];

    cout << "Entered array:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)  {
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;    

    cout << "spiral print:" << endl;

   spiral(r, c, arr);
  
  cout << endl;
return 0;
}