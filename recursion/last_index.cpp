#include<iostream>
using namespace std;

int lastIndex1(int arr [] , int n, int key) {

    if(n == 0) return -1;

    int subIndex = lastIndex1(arr + 1, n-1, key);
    if(subIndex == -1) {
        if(arr[0] == key) return 0;
        else return -1;    
    } else return subIndex + 1;
    
}

int lastIndex2(int arr [] , int n, int key, int idx) {

    if(idx == n) return -1;

    int subIndex = lastIndex2(arr, n, key, idx + 1);
    if(subIndex == -1) {
        if(arr[idx] == key) return idx;
        else return -1;
    } else return subIndex;
    
}

int main() {

    int arr[] = {1,2,3,4,5,3,22};
    int n = sizeof(arr) / sizeof(int);
    int res1 = lastIndex1(arr, n, 3);
    cout << res1 << endl;

    int res2 = lastIndex2(arr, n, 3, 0);
    cout << res2 << endl;


    return 0;
}