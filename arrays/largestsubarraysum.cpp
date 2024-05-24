#include<iostream>

using namespace std;

//brute force O(n^3)
int maxSumSubArrays(int arr[], int n) {                                                    
    int sum;
    int maxSum=0;
    for(int i=0;i<n;i++) {
        for(int j=i; j<n;j++) {
             sum = 0;
            for(int k=i;k<=j;k++) {
              sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
   return maxSum;
}

int main() {
    
    //int arr [] = {1-2,3,4,-1,5,-12,6,1,3};
    int arr [] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    cout << endl;
    int maxSum = maxSumSubArrays(arr, n);
     cout << endl << "Max: " << maxSum << endl;
    return 0;

}