#include<iostream>
using namespace std;

unsigned long long evenFiboSum(unsigned long long n) {
    
    unsigned long long a = 1;
    unsigned long long b = 2;
    unsigned long long next;
    unsigned long long sum = 0;
    
    while(a<n) {
       if(a%2 == 0) sum += a;
        next = a+b;
        a = b;
        b = next;
    }
    return sum;
}



int main() {
   
   unsigned long long n;
   cout << endl << "Enter number:" << endl;
   cin >> n;
 
   unsigned long long res = evenFiboSum(n);
   cout << res << endl;

    return 0;
}