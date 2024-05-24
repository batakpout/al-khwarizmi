//try backtracking and bit masking approach later
//subset is nothing but any possible combination of the original array (or a set). Not Contiguous
// number of subsets of an array of size n = 2 pow n
#include<iostream>
using namespace std;
/**
  use binary number concept here:
  for abc [empty, a, b, c, ab, bc, ac, abc]
  --input is: abc--
  000(0), 001(1), 010(2), 011(3), 100(4), 101(5), 110(6), 111(7)
  ---,     --c,     -b-,    -bc,    a--,    a-c,    ab-,    abc  [this should be output of the program]
*/
//TC: O(n * 2^n)
void printSubSets(char arr[], int n) {
  int maxSubArrays = pow(2, n);

  for(int i=0;i<maxSubArrays;i++) { 
    string s = "";
    int temp = i;
    for(int j=n-1;j>=0;j--) {
        if(temp%2 == 0) s = "-\t" + s;
        else s = string(1, arr[j]) + "\t" +  s; //appending char to a string string(size, char)
       temp = temp/2;     
    }

    /**
     * If we don't want - in the output
    for(int j=n-1;j>=0;j--) {
        if(temp%2 != 0)
         s = string(1, arr[j]) +  s;
       temp = temp/2;     
    }
    */
    cout << s << endl;
  }
}

int main() {
    
   int n;
   cout << endl;

   cout << "enter size of array:" << endl;
   cin>>n;

   cout << endl << "enter array:" << endl;
   char arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
   printSubSets(arr, n);

    cout << endl;


    return 0;
}
