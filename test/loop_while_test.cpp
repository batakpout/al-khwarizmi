// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 vector<int> WavePrint(int m, int n, vector<vector<int>> arr){
    int isEven=0;
    for(int j=n-1;j>=0;j--) {
        
        if(isEven%2==0) {
            for(int i=0;i<m-1;i++) {
                cout << arr[i][j] << " ";
            }
        }else {
           for(int i=m-1;i>=0;i++) {
                cout << arr[i][j] << " ";
            } 
        }
        isEven++;
    }
  
}

int main() {
    // Write C++ code here

 

}