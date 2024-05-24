
#include<iostream>
using namespace std;

//TC: O(N^2)
void maxSubArraySumUsingPrefixSum(int arr[], int n) {
    
   int prefix[n];
   prefix[0] = arr[0];
   for(int i=1;i<n;i++) {
    prefix[i] = prefix[i-1] + arr[i];
   }

   int largestSum;
   for(int i=0;i<n;i++) {
      for(int j=i;j<n;j++) {
        int subArraySum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j]; 
        //cout << "sumarraysum: " << subArraySum << endl;
        largestSum = max(subArraySum, largestSum);
      }
   }

   cout << "Largest subarray sum: " << largestSum;

}

int main() {
    
   int n, k;
   cout << endl;

   cout << "enter size of array:" << endl;
   cin>>n;

   cout << endl << "enter array:" << endl;
   int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    maxSubArraySumUsingPrefixSum(arr, n);
    cout << endl;
    return 0;
}
