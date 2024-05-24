#include<iostream>
using namespace std;
//https://www.mathsisfun.com/algebra/matrix-multiplying.html

int main() {

    int r1,c1;
    cout << "Enter first matrix size:" << endl;
    cin>>r1>>c1;
    
    cout << "Now enter first matrix:" << endl; 
    int m1[r1][c1];//their sizes must be known at compile-time, so declare after entering sizes
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c1;j++) {
            cin >> m1[i][j];
        }
    }
    int r2, c2;
    cout << "Enter second matrix size:" << endl;
    cin>>r2>>c2;
    cout << "Now enter second matrix:" << endl; 
    int m2[r2][c2];
    
    for(int i=0;i<r2;i++) {
        for(int j=0;j<c2;j++) {
            cin >> m2[i][j];
        }
    }

    if(c1 != r2) cout << endl << "invalid input" << endl;
    //now multiply them, O(N^3)
    // Strassen's algorithm, that can perform matrix multiplication in O(n^2.807) time complexity
    //An efficient algorithm for efficient multiplying large integers: Karatsuba's algorithm:O(n^log3)
    //which is more efficient than the standard long multiplication algorithm's O(n^2) time complexity for large integers.
    //Both algorithms are examples of divide-and-conquer techniques that aim to improve the efficiency of fundamental operations
    // like matrix multiplication and integer multiplication, respectively.
    int sum;
    int product[r1][c2];
     for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
        sum=0;
        for(int k=0;k<r2;k++) {
            sum += (m1[i][k] * m2[k][j]);    
        }    
        product[i][j] = sum;    
      }
    }

    cout << endl << "Printing multiplied matrix:" <<endl;
      for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}