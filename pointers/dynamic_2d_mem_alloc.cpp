#include<iostream>
using namespace std;

int ** create2DArray(int r, int c) {
    int ** arr = new int*[r];
    for(int i=0;i<r;i++) {
        arr[i] = new int[c];
    }

    //init the array with increasing list of no's
    int v = 1;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            arr[i][j] = v;
            v++;
        }
    }
    return arr;
}

int main() {

cout << "Enter r, c: " << endl;
int r, c;
cin >> r>>c;

int ** arr = create2DArray(r,c);

for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i=0;i<r;i++) {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;

}