#include<iostream>
using namespace std;

int firstIndex1(int arr [] , int n, int key) {

    if(n == 0) return -1;

    if(arr[0] == key) return 0;
    int res = firstIndex1(arr + 1, n-1, key);
    if(res != -1) return res + 1;
    return -1;
}

 int firstIndex2(int arr[], int n, int key, int idx) {
    if(idx == n) return -1;
    if(arr[idx] == key) return idx;
    return firstIndex2(arr, n, key, idx + 1);
 }

int main() {

    int arr[] = {1,2,3,4,5,6,22};
    int n = sizeof(arr) / sizeof(int);
    int res1 = firstIndex1(arr, n, 122);
    cout << res1 << endl;

    int res2 = firstIndex2(arr, n, 5, 0);
    cout << res2 << endl;


    return 0;
}