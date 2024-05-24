/**
  Total no of f calls = 15 , check the ss, pow(2, n+1) - 1 e.g for 3 pegs, n(f-call) = 14 or O(2 pow N) exponential complexity
  Total moves to move pegs from A to B =  7, check the ss
*/
#include<iostream>
using namespace std;

void towerOfHanio(int n, char a, char b, char c) {
    if(n == 0) return; 
    else {
        towerOfHanio(n-1, a, c, b);
        cout << a << "->" << b << endl;
        towerOfHanio(n-1, c, b, a);
    }
}
int main() {

    towerOfHanio(3, 'A', 'B', 'C');
    return 0;
}