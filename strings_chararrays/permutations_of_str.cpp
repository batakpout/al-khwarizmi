/**
 * iterative solution not recursive or based on bfs/dfs whatever
 * abc will have N! permutations i.e 6
  abc, acb, bac, bca, cab, cba
*/
#include<iostream>
#include<string>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}

//TC: O(fact(n) * l) i.e O(N * L)
void printPermutationsOfString(string s) {
   int l = s.length();
   int n = factorial(l);
   int temp;
   string output, tempString;
   for(int i=0;i<n;i++) {
     temp=i;
     tempString=s;
     output="";
     for(int j=l;j>0;j--) {
        int rem = temp%j;
        temp=temp/j;
        output += tempString[rem];
        tempString.erase(rem, 1); //erase(atIndex, howManyToErase);
     }
     cout << output << endl;
   }
}

int main() {
    string s;

    cout << "Enter a string: " << endl;
    getline(cin, s);
    cout << "Permutations: " << endl;
    printPermutationsOfString(s);
    cout << endl;
    return 0;
}