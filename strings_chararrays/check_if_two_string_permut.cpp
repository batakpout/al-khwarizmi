
#include<iostream>
using namespace std;
//abc is permutation of acb, it has 3! permutations
bool checkIfTwoStringPalindrome(string s1, string s2) {
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
    /**
     // Compare sorted strings
    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;
 
    return true;
    */
}

int main() {

    string s1,s2;
    cout << endl << "Enter  string1:";
    getline(cin, s1);
    cout << endl << "Enter  string2:";
    getline(cin, s2);
    string res = checkIfTwoStringPalindrome(s1, s2) ? "true" : "false";
    cout << endl << "palindromes = " <<  res << endl;
    return 0;
}