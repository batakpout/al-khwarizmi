#include<iostream> //header file
using namespace std;
int main() {
    //An array is a linear collection of values stored
    // at contiguous memory locations
    //Array stores homogeneous values.
    
    cout << endl;

    int arr[100];
    int a[100] = {0};
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;

    cout << endl << "==partition1==" << endl;

    int c[100] = {1,2,3};
    cout << c[1] << endl;
    cout << c[10] << endl;
    cout << c[22] << endl;

    cout <<  endl << "==partition2==" << endl;

   int b[] = {1,2,3};
    cout << b[1] << endl;
    cout << b[10] << endl;
    cout << b[22] << endl;

    cout <<  endl << "==partition3==" << endl;

    string fruites[2] = {"apple", "guava"};
    cout << fruites[1] << endl;
   //cout << fruites[2] << endl; //Segmentation fault: 11
    
    cout << endl;

    cout <<  endl <<"==partition4==" << endl;
    cout << "Enter student marks" << endl;
    int marks[4];
    //int marks[40] = {-20};
    for(int i=0;i<4;i++) {
        cin >> marks[i];
    }
    cout <<"marks are: " << endl;
    for(int i=0;i<20;i++) { //will print garbage too
        cout << marks[i] << ", ";
    }
    return 0;
    /**
     * So initializing an array with static values like {1} sets rest of the array as 0
     * If set as int marks[4] and then trying to access marks[20] will yield garbage values
    */

}