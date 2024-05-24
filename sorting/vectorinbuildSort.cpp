#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main() {

    vector<int> vec = {5, 2, 9, 1, 7};

    // Sorting the vector
    sort(vec.begin(), vec.end(), compare);

    // Printing the sorted vector
    cout << "Sorted vector: ";
    for (auto num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
