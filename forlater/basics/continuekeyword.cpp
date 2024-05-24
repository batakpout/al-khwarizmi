#include <iostream>
using namespace std;

int main() {
    // Loop to print even numbers from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        // Skip the odd numbers
        if (i % 2 != 0) {
            continue; // Skip the rest of the loop body for odd numbers
        }
        cout << i << " ";
    }
        cout << std::endl;

    return 0;
}