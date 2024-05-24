#include<iostream>
using namespace std;
/**
 Time Complexity: Checkout out the screenshot.  we want to find the last term of GP i.e 
 when the algorithm converges to 1, it forms a GP which then after solution lead to Log(power) complexity.
  i.e Log to the base 2 of Power, so, O(logpower)
 Space Complexity: O(logpower)
*/
int basePowerLinear(int base, int power) {
    if(power == 0) return 1;
    else {
        int halfOfPowerResult = basePowerLinear(base, power / 2);
        int finalResult = halfOfPowerResult * halfOfPowerResult;
        if(power % 2 != 0) finalResult *= 2;
        return finalResult;
    }
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