#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; // pointer points to the beginning of the array
    //int ptr = arr; CTE
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << *ptr << " "; // dereference and print the value
        ptr++;//the pointer moves forward by an amount that depends on the size of the data type it points to.
    }
    cout << endl;

    int* ptr1 = &arr[0]; // pointer to the beginning of the array
    int* ptr2 = &arr[2]; // pointer to the third element of the array

    if (ptr1 == ptr2) {
        cout << "Pointers point to the same memory location." << endl;
    } else if (ptr1 < ptr2) {
        cout << "ptr1 comes before ptr2 in memory." << endl;
    } else {
        cout << "ptr1 comes after ptr2 in memory." << endl;
    }

    cout << endl << ptr << endl; //1D points to begining of arr - 1
    cout << endl << ptr + 1 << endl; // 1D next item in array address point to arr[1]
    cout << endl << arr << endl; //1D points to begining of arr
    cout << endl << arr + 1 << endl;  // 1D next item in array address point to arr[1]

    cout << endl << *(arr + 1) << endl; //1D: next item in array address point to arr[1], * its value as 2
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << endl <<  *(arr1+1) << endl; //since its 2D, (arr1 + 1) --> points to 2nd row, *(arr1 + 1) points to address of that start of that second row
    cout << endl <<  *(*(arr1+1)) << endl;//2D: *(arr1+1) --> points to start address of 2nd row and *(*(arr1+1)) value at that start i.e 4
    cout << endl << *(*(arr1 + 1) + 2) << endl; ////2D: *(arr1+1) + 2 --> 2nd row by *(arr1+1) , +2 means points to second column address of second row then *(*(arr1 + 1) + 2) value there i.e 6
    return 0;
}
