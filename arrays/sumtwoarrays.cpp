
#include<iostream>
using namespace std;

//int* sumTwoArrays(int arr1[], int n1, int arr2[], int n2) {
//TC = O(max(n1, n2)), where n1 and n2 are the sizes of the input arrays arr1 and arr2 respectively
void printSumOfTwoArrays(int arr1[], int n1, int arr2[], int n2) {

    int sumArrayLength = max(n1, n2);
    int *sumArr = new int[sumArrayLength];
    int i = n1 - 1;
    int j = n2 - 1;
    int k = sumArrayLength - 1;
    int c = 0;
    int sum = c;
    
    while(k >=0) {
       
        sum = c;
        if(i >=0) 
            sum += arr1[i];

        if(j >=0)
            sum += arr2[j];    
         
         sumArr[k] = sum%10;
         c = sum/10;
         i--;
         j--;
         k--;
    }

    if(c!=0)
     cout << c << " , ";

     for(int i=0;i<sumArrayLength;i++) {
        cout << sumArr[i] << " , ";
    }
    delete [] sumArr ;
}

int main() {
    
   int n1, n2;
   cout << endl;
   cout << "enter size of two arrays:" << endl;
   cin>>n1>>n2;
   
   cout << endl << "enter first array:" << endl;
   int arr1[n1];
    for(int i=0;i<n1;i++) {
        cin >> arr1[i];
    }

   cout << endl << "enter second array:" << endl;
   int arr2[n2];
    for(int i=0;i<n2;i++) {
        cin >> arr2[i];
    }

    printSumOfTwoArrays(arr1, n1, arr2, n2);
    //int *sum = sumTwoArrays(arr1, n1, arr2, n2);
    cout << endl;

    return 0;
}