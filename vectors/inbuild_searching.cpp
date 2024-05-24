/**
 *  iterator is like an address, subtracting two addresses gives the no of boxes (locations) in between. same is also true for array address.
    int arr[100];
    int *a = arr;
    int *b = arr + 5;
    b - a will give 5.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    cout << "enter key:" << endl;
    int key;
    cin>>key;
    vector<int> v = {1,2,3,4,5,6,7,8};

    //:: is the scope resolution operator.It is used to access members of a namespace, class, or structure.
    // iterator is a nested type within the vector<int> class, representing an iterator that can traverse through the elements of the vector.
    //vector<int> :: iterator it = find(v.begin(), v.end(), key); searches in complete vector
    //find has linear complexity
    vector<int> :: iterator it = find(v.begin(), v.begin() + 5, key); //open ended at last so searches in 1,2,3,4,5

    if(it != v.end()) {
        cout << endl << "Present at index: " << it - v.begin() << endl;
    } else {
        cout << endl << "element not found" << endl;
    }

    cout << endl << "zara hatke" << endl;
     int arr[100];
    int *a = arr;
    int *b = arr + 5;

    cout << "b-a: " << b - a << endl;

    cout << "Binary search: " << endl;

    int myints[] = {1,2,3,4,5,4,3,2,1};
    vector<int> v2(myints,myints+9);  // 1 2 3 4 5 4 3 2 1

   sort(v.begin(), v.end());

   cout << "looking for a 3... ";
  if (binary_search (v.begin(), v.end(), 3))
    cout << "found!\n"; else cout << "not found.\n";

  /**
    checkout search, lower_bound, upper_bound functions also
  */
    return 0;

    
}