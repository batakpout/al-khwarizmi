
#include<iostream>
using namespace std;

/**
 since we include a if else condition,yet we have o(n) time complexity,
 does complexity depends on loops only,not on conditions like if else?

 if- else is treated as single instruction O(1) where as the loop is a function of input size n most times
*/
//TC: O(N), SC: O(1)
//Kadane's algo require atleast 1 positive no. in array.
//check it out online a single algo for both +ive and -ve numbers
void maxSubArraySumKadanesAlgorithm(int arr[], int n) {


 // 3 2 -7 -1 2 -3
  //int largestSum, currentSum = 0; wrong it set largestSum=215413072
   int largestSum=0, currentSum = 0;
   for(int i=0;i<n;i++) {
     currentSum = currentSum + arr[i];
     if(currentSum < 0) {
        currentSum = 0;
     }   
     largestSum = max(largestSum, currentSum);
   }

   cout << "Largest subarray sum: " << largestSum;

}

 /**
 what if all the elements of array are negative ,eg {-2,-1,-5},
 in this case max subarray sum should be -1 but according to kadane's algorithm
  its come out to be 0, so we need consider this as a separate case where all elements are negative?
*/
void kadaneHandleNegative(int arr[], int n) {
    
	int cs=0;
	int largestSum=INT_MIN;
 
	for(int i=0;i<n;i++){
		
		cs=cs+arr[i];
		if(cs<arr[i])
			cs=arr[i];
 
		largestSum=max(largestSum,cs);
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
    
    //maxSubArraySumKadanesAlgorithm(arr, n);
    kadaneHandleNegative(arr, n);
    cout << endl;
    return 0;
}

