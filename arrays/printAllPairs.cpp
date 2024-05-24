#include<iostream>
using namespace std;

/**{1,2,3,4}
1,2
1,3
1,4

2,3
2,4

3,4
*/
//TC:  O(n^2) 
void printAllPairs(int arr[], int n) {
    
  for(int i = 0; i < n; i++) {
    int x = arr[i];
    for(int j = i + 1; j < n; j++) {
        int y = arr[j];
        cout << x << "," << y << endl;
    }
  cout << endl;

  }
}

int main() {
    
    int arr [] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
   
    cout << endl;
    printAllPairs(arr, n);

    return 0;

}
