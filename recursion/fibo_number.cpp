#include<iostream>
using namespace std;

// space complexity: O(N), time complexity check ss, O(pow(2, n-1))
int fibo(int n) {
    if(n == 0 or n == 1) return n;
    else return fibo(n-1) + fibo(n-2);
}
int main() {
    
    int res = fibo(6);
    cout << endl << res << endl;
    return 0;
}