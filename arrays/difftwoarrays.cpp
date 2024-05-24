
#include<iostream>
using namespace std;

//arr2 is larger than arr1, means n2 > n1
//TC=O(max(n1, n2))
void printDiffTwoArrays(int arr1[], int n1, int arr2[], int n2) {
    
    int diffArr[n2];
    int i = n1 - 1;
    int j = n2 - 1;
    int k = j;
    int c = 0;
    int diff;
    
    while(k >=0) {
       diff = 0;
       int a1v = (i >= 0 ? arr1[i] : 0);
        if(arr2[j] + c >= a1v) {
            diff = arr2[j] + c - a1v;
            c = 0;
        } else {
            diff = (arr2[j] + 10 + c) - a1v;
            c = -1;
        }
      diffArr[k] = diff;
      i--;
      j--;
      k--;
    }

 /**
   need to handle 1000 - 999 = 1 not 0001
 */

   int idx = 0;
   while(idx < n2) {
    if(diffArr[idx] == 0)
       idx++;
    else break;
   }

    for(int i=idx;i<n2;i++)
      cout << diffArr[i] << " ";
}

int main() {
    
   int n1, n2;
   cout << endl;

   cout << "enter size of larger array:" << endl;
   cin>>n2;

   cout << "enter size of smaller array:" << endl;
   cin>>n1;

   
   cout << endl << "enter larger array:" << endl;
   int arr2[n2];
    for(int i=0;i<n2;i++) {
        cin >> arr2[i];
    }
    
   cout << endl << "enter smaller array:" << endl;
   int arr1[n1];
    for(int i=0;i<n1;i++) {
        cin >> arr1[i];
    }

   

    printDiffTwoArrays(arr1, n1, arr2, n2);
    cout << endl;

    return 0;
}