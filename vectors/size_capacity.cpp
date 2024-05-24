#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    vector<int> v;
 
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
 
    cout << v.size() << endl;
    cout << v.capacity();
 
    return 0;
}
/**
 * output 5, 8
 * After pushing 5 elements (1, 2, 3, 4, 5), the capacity is increased to 8. This means the vector currently has space allocated for 8 elements.
 * In the C++ standard library, the std::vector container uses an implementation-defined growth strategy to allocate memory for elements.
    It typically increases its capacity by a certain factor whenever it needs to reallocate memory due to running out of space.
    This growth strategy is implementation-dependent and varies between different compilers and library implementations.
    Initial capacity: 1
    After adding 1 element: capacity = 1
    After adding 2 elements: capacity = 2 //double to 2
    After adding 3 elements: capacity = 4 /double to 4
    After adding 4 elements: capacity = 4 (no need to grow yet)
    After adding 5 elements: capacity = 8 // doubles to 8
*/