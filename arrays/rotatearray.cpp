
#include<iostream>
using namespace std;

void reverseMine(int arr[], int s, int e) {
    while(s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

/**
  P1 + P2
  P1` + P2`
  P2`` + P1`` == P2 + P1
*/
//TC:O(n/2 + n/2) = O(n), SC: O(1)
//inplace impl. no extra space
void rotate(int arr[], int n, int k) {
    
    k = k % n;
    if(k < 0) k = k + n;
    
    reverseMine(arr, 0, n-k-1);
    reverseMine(arr, n-k, n-1);
    reverseMine(arr,0, n-1);

}

//TC:O(n/2 + n/2) = O(n), SC: O(1)
//in-place impl. no extra space, using in-build reverse function
vector<int> inPlaceUsingVector(vector<int> arr, int k) {
    int n = arr.size();
    k = k % n;
    if(k < 0) k = k + n;
    
    reverse(arr.begin(), arr.begin() + n-k);
    reverse(arr.begin() + n-k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

//using vector
//Time Complexity: O(n), Space Complexity: O(n)
vector<int> usingVectorRotate(vector<int> arr, int k) {
    int n = arr.size();
    k = k % n;
    if(k < 0) k = k + n;
    vector<int> output;

    for(int i = n-k; i<n;i++) {
        output.push_back(arr[i]);
    }
    for(int i = 0; i<n-k;i++) {
        output.push_back(arr[i]);
    }
    return output;
}

int main() {
    
   int n, k;
   cout << endl;

   cout << "enter size of array:" << endl;
   cin>>n;

   cout << "enter k:" << endl;
   cin>>k;

   
   cout << endl << "enter array:" << endl;
   int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    rotate(arr, n, k);
   cout << endl << "rotated array:" << endl;
   
   for(int a: arr)
    cout << a << " ";
    
    cout << endl;

    return 0;
}
