
#include<iostream>
//#include <tuple>
using namespace std;

//tuple<int, int> ceilFloorOfArray(int arr[], int n, int d) {
     //TC: O(log n)

using namespace std;


int lowerBound(vector<int> A, int Val) {
    
    int floor=-1; // to handle cases when Val=0 i.e less than lower element in vector
    int s = 0;
    int e = A.size() - 1;
    int mid = 0;
    while(s<=e) {
        mid = s + (e-s)/2;
        if(Val > A[mid]) {
            floor = A[mid];
            s = mid+1;
        } else if(Val < A[mid]) {
            e = mid-1;
        }else {
            floor = A[mid];
            break;
        }
    }
    return floor;
    
}

//iterative solution
int lowerBound(vector<int> A, int Val) {
    int lowBound = -1;
    for(auto x : A) {
        if(x <= Val)
            lowBound = x;
    else 
        break;
    }
    return lowBound;
}

void ceilFloorOfArray(int arr[], int n, int d) {
    int ceil,floor=0;
    int s=0, e=n-1;
    while(s<=e) {
        int mid = s + (e-s)/2;
        if(d > arr[mid]) {
            floor=arr[mid];
            s = mid + 1;
        } else if(d < arr[mid]) {
            ceil=arr[mid];
            e = mid-1;    
        } else { // d == arr[mid]
            ceil=floor=arr[mid];
            break;
        }
    }
        
    //make_tuple(ceil, floor); figure it out later
  cout << "floor: " << floor << endl;
  cout << "ceil: " << ceil << endl;
}



int main() {
    
   int n, d;
   cout << endl;

   cout << "enter size of array:" << endl;
   cin>>n;

   cout << endl << "enter array:" << endl;
   int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << endl << "enter d:" << endl;
    cin>>d;
    
    //tuple<int, int> result = ceilFloorOfArray(arr, n, d);
    ceilFloorOfArray(arr, n, d);


    //cout << "Floor: " << get<0>(result) << endl;
   // cout << "Ceil: " << get<1>(result) << endl;

    return 0;
}