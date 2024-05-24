#include <iostream>
using namespace std;

// Function to process the 2D array
int** processArray(int** arr, int rows, int cols) {
    // Example operation: doubling each element
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            arr[i][j] *= 2;
        }
    }
    return arr;
}

int main() {
    cout << "Enter size of matrix:" << endl;
    int r, c;
    cin >> r >> c;

    // Allocate memory for the dynamic 2D array
    int **arr = new int*[r];
    for(int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }

    cout << endl << "Enter array elements:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    // Call the function to process the array
    int** processedArray = processArray(arr, r, c);

    // Printing the processed array
    cout << endl << "Processed array:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << processedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < r; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
