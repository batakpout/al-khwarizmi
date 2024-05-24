#include<iostream>
using namespace std;

void primeFactorsNaive(int n) {
   
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

   for(int i=3;i*i <= n;i += 2) {
     if(n%i == 0) {
        cout << i << " ";
        n = n / i;
     }
   } 
    if (n > 2)
        cout << n << " ";
}

int main() {
   
   int n;
   cout << endl << "Enter number:" << endl;
   cin >> n;
 
    primeFactorsNaive(n);
    cout  << endl;
    return 0;
}