#include<iostream>
using namespace std;
/**
 Time Complexity: O(power)
 space complexity depends on the depth of the recursion stack
 Space Complexity: O(power+1) +1 due to power=0 call at last
*/
int basePowerLinear(int base, int power) {
    if(power == 0) return 1;
    else return base * basePowerLinear(base, power-1);
}
int main() {

    cout << "Enter a base:" << endl;
    int base;
    cin>>base;
    cout << "Enter a power:" << endl;
    int power;
    cin>>power;
    int res = basePowerLinear(base, power);
    cout << endl << "result: " << res << endl;
    return 0;
}