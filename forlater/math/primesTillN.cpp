#include<iostream>
using namespace std;

bool isPrime(int n) {
   if(n==1) return false;
   if(n == 2 || n == 3) return true;
   if(n %2 == 0 || n % 3 == 0) return false;
   for(int i = 5; i*i <= n; i = i + 6) {
     if(n%i==0 || n % (i+2) == 0) return false;
   }
   return true;
}

//TC: O(N * squareRrt(N))
void primesTillNNaive(int n) {
  for(int i=2;i<=n;i++) {
    if(isPrime(i)) cout << i << " ";
  }
}

//Seive of Eratosthenes
//TC O(N * Log * Log N) = O(n*(log(log(n)))) ~ O(N) as Log LogN grows way too slow
//Check GFG for mathematical proof of it.
//we can do in O(N) check GFG
//Also Segmented Seive and problems based on it on GFG
void primesTillN(int n) {
   vector<bool> arr(n+1, true);

   for(int i=2;i*i <= n;i++) {
        if(arr[i]) {
            for(int j = i*i;j<=n;j+=i) {
                arr[j] = false;
            }
        }
   }

   for(int i=2;i<=n;i++) {
      if(arr[i]) cout << i << " ";
   }
}

//same perf as above just a bit shorter
void primesTillNSuccint(int n) {
   vector<bool> arr(n+1, true);

   for(int i=2; i<= n;i++) {

        if(arr[i]) {
            cout << i << " ";
            for(int j = i*i;j<=n;j+=i) {
                arr[j] = false;
            }
        }
   }
}

int main() {
   
   int n;
   cout << endl << "Enter number:" << endl;
   cin >> n;
 
   // primesTillN(n);
   primesTillNSuccint(n);
    cout  << endl;
    return 0;
}