#include<iostream>
using namespace std;
int main() {
    cout << endl;

    int i = 5, j;
    j = 2 * ++i + 2 * i++;
    cout << i << " " << j;
    
    cout << endl;

    return 0;

}