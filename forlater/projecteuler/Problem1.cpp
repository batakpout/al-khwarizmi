#include<iostream>
using namespace std;

//if n is too large it will lead to timeouts.
int simpleIterative(int n) {
    unsigned long long x = 0;
    for (unsigned long long i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            x += i;
        }
    }
    return x;
}

unsigned long long sum(unsigned long long x) {
  return x * (x + 1) / 2;
}


int optimizedOne(unsigned long long n) {
    auto sumThree   =  3 * sum(n /  3);
    auto sumFive    =  5 * sum(n /  5);
    auto sumFifteen = 15 * sum(n / 15);

    return (sumThree + sumFive - sumFifteen);
}



int main() {
   
   unsigned long long last;
   cout << endl << "Enter number:" << endl;
   cin >> last;

   last--;
 
    unsigned long long res = optimizedOne(last);

    cout << res << endl;

    return 0;
}