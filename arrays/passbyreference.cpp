#include<iostream>
using namespace std;

/**
 The base address of the array arr is the memory address of its first element, 
 arr[0]

Memory offset for arr[2]   = Base address + (index * sizeof(int))
                           = Base address + (2 * sizeof(int)) 
                           = 0x1000 + (2 * 4)
                           = 0x1000 + 8
                           = 0x1008
*/
void printArray(int arr[]) { //here it takes the address
    //here arr is a pointer variable, so takes 8 bytes
    cout << "In printArray: " << sizeof(arr) << endl;
    int n = sizeof(arr) / sizeof(int); // 8/4 = 2
    cout << "printing inside printArray:" << endl;
     for(int i=0;i<n;i++) {
        cout << arr[i] << endl;
    }
}

//printArray2 is same as above
void printArray2(int * arr) {
    //here arr is a pointer variable, so takes 8 bytes
    cout << "In printArray2: " << sizeof(arr) << endl;
}

void doThisInReality(int arr[], int n) { //here it takes the address
    //here arr is a pointer variable, so takes 8 bytes
    cout << "doThisInReality: " << sizeof(arr) << endl;
    cout << "printing inside doThisInReality:" << endl;
     for(int i=0;i<n;i++) {
        cout << arr[i] << endl;
    }
    arr[0] = 24;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    cout << "In main: " << sizeof(arr) << endl;
    printArray(arr); //here address of array is passed
    //printArray2(arr);

    cout <<"Print inside main:" << endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << endl;
    }
    doThisInReality(arr, n);
     cout <<"Print inside main to check update in doThisInReality for arr[0]:" << endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << endl;
    }

    //so all these methods share a common memory for the array which
    //also confirms that arrays are passed by reference.
    return 0;
}