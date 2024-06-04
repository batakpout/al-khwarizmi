#include<iostream>
#include<vector>

using namespace std;

bool isSorted1(int arr [] , int n) {
    if(n==1) return true;
    if(arr[0] < arr[1] && isSorted1(arr + 1, n - 1)) return true;
    return false;
}

bool isSorted2(int arr [] , int n, int idx) {
   if(idx == n - 1) return true;
   if(arr[idx] < arr[idx + 1] && isSorted2(arr, n, idx + 1)) return true;
   return false;
}

bool isSorted3(vector<int> v) {
   int n = v.size();
   if(n == 1) return true;
   if(v[n-1] < v[n-2]) return false;
   v.resize(n-1);
   return isSorted3(v);
}

int main() {
   int arr[] = {1,2,3,4,5};
    //int arr[] = {1,2,22,4,5};
    int n = sizeof(arr) / sizeof(int);

    int sort1 = isSorted1(arr, n);
    cout  << (sort1 == 1 ? "true" : "false") << endl;

    int sort2 = isSorted2(arr, n, 0);
    cout  << (sort2 == 1 ? "true" : "false") << endl;

    vector<int> v = {1,50,3,4,5};
    int sort3 = isSorted3(v);
    cout  << (sort3 == 1 ? "true" : "false") << endl;
    return 0;
}