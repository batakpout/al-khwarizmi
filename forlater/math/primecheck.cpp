#include<iostream>
using namespace std;

//for 7 i.e for prime no, loop runs 5 times i.e N-2 times so O(N) in worst case
//O(1) in certain cases
void checkPrimeNaive(int n) {
    bool check=true;
    if(n==1) check = false; //return false;
    else {
        
        for(int i=2;i<n;i++) {
            if(n%i == 0) check = false; //return false;
        }
    }
    //just return true; so no need of bool check here
    if(check) cout << endl << "Prime" << endl;
    else cout << endl << "Not Prime" << endl;
}

//TC: On(squareRoot(N)) e.g for 100 just 10
void usingSquareRoot(int n) {

    bool check=true;
    if(n==1) check = false; //return false;
    else {
        for(int i=2;i*i<=n;i++) {
            if(n%i == 0) check = false; //return false;
        }
    }
    //just return true; so no need of bool check here
    if(check) cout << endl << "Prime" << endl;
    else cout << endl << "Not Prime" << endl;
}

//if n is large then sqrt(n) can also be a large number.
/*
 for 1031, starting from 2 till 31 we will go so 29 checks
 but with new approach 5, 11 , 17, 23, 29 only 5 checks
 so, almost like 4 times faster but same complexity as squarert(N)
*/
//write number list on paper and analyze
bool optimizedPrimeCheck(int n) {
   if(n==1) return false;
   if(n == 2 || n == 3) return true;
   if(n %2 == 0 || n % 3 == 0) return false;
   for(int i = 5; i*i <= n; i = i + 6) {
     if(n%i==0 || n % (i+2) == 0) return false;
   }
   return true;
}

int main() {
   
   int n;
   cout << endl << "Enter number:" << endl;
   cin >> n;
 
    //checkPrimeNaive(n);
      //usingSquareRoot(n);
    bool isPrime = optimizedPrimeCheck(n);
    if(isPrime == 0) cout << "Not Prime"; else cout << "prime";
    cout  << endl;
    return 0;
}