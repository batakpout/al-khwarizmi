#include<iostream>
using namespace std;
/**
 Sample inputs: r=6,c=6, s=2, k=2
 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46
 i.e
11 12 13 14 15 16 
17 18 19 20 21 22 
23 24 25 26 27 28
29 30 31 32 33 34 
35 36 37 38 39 40 
41 42 43 44 45 46 
   
*/
vector<int> reverse(vector<int> & arr, int s, int e) {
    while(s < e) {
        swap(arr[s], arr[e]); //todo: swap(arr[e], arr[s]) will work too
        s++;
        e--;
    }
    return arr;
}

void rotate(vector<int> & arr, int k) {
    
    int n = arr.size();
    k=k%n;
    if(k<0)k=k+n;
    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - 1);

}

vector<int> make1dArrayFromSpiral(vector<vector<int>> & arr, int s) {
    int minr = s - 1, minc = s - 1, maxr = arr.size() - s, maxc = arr[0].size() - s;
    /**
        size of 1d array: size is redundant here
        int n = ((2 * (maxr-minr+1)) + (2 * (maxc-minc+1))) - 4; //+1 coz 4-1 = 3 but there r 4 items in that, check diagram
        int n = 2maxr - 2minr + 2 + 2maxc - 2minc + 2 - 4
        int n = 2(maxr-minr) + 2(maxc-minc)
        int n = 2 * (maxr - minr + maxc - minc);
    */

    vector<int> v;
    for (int i = minr, j = minc; i <= maxr; i++) v.push_back(arr[i][j]);
    for (int i = maxr, j = minc + 1; j <= maxc; j++) v.push_back(arr[i][j]);
    for (int i = maxr - 1, j = maxc; i >= minr; i--) v.push_back(arr[i][j]);
    for (int i = minr, j = maxc - 1; j >= minc + 1; j--) v.push_back(arr[i][j]);
    return v;
}

void makeSpiralArrayFrom1D(vector<vector<int>> & arr, vector<int> & oneDArray, int s) {
    int minr = s - 1, minc = s - 1, maxr = arr.size() - s, maxc = arr[0].size() - s, idx = 0;
    for (int i = minr, j = minc; i <= maxr; i++) arr[i][j] = oneDArray[idx++];
    for (int i = maxr, j = minc + 1; j <= maxc; j++) arr[i][j] = oneDArray[idx++];
    for (int i = maxr - 1, j = maxc; i >= minr; i--) arr[i][j] = oneDArray[idx++];
    for (int i = minr, j = maxc - 1; j >= minc + 1; j--) arr[i][j] = oneDArray[idx++];
}

int main() {

    cout << "Enter r, c:" << endl;
    int r, c;
    cin >> r >> c;

    cout << "Enter k, s: " << endl;
    int s, k; //s=which shell to rotate, k=by how much rotate
    cin >> s >> k;

    vector<vector<int>> arr(r, vector<int>(c));

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> arr[i][j];

/*     cout << "Entered array:" << endl;
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) cout << arr[i][j] << " ";
        cout << endl; */

    vector<int> oneDArrayFromSpiral = make1dArrayFromSpiral(arr, s);
    rotate(oneDArrayFromSpiral, k);
    makeSpiralArrayFrom1D(arr, oneDArrayFromSpiral, s);

    cout << "Rotated array:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << arr[i][j] << " ";
        cout << endl;
    }


    return 0;
}