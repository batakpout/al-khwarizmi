/**
 'p' - 'a' = 'P' - 'A' //will be same
  so 'p' = 'a' + 'P' - 'A'
  so lc = 'a' + UC - 'A'
  similarly, 'P' = 'A' + 'p' - 'a'
  UC = A + lc - a
*/
#include<iostream>
using namespace std;

string toggle(string s) {
   string output;
   for(int i=0;i<s.size(); i++) {
     char c = s[i];
     if(c >= 'a' && c <= 'z') {
         c = 'A' + c - 'a';
     } else if(c >= 'A' && c <= 'Z') {
        c = 'a' + c - 'A';
     }
     output += c;
   }
   return output;
}

string toggle2(string s) {
   string output;

   for(auto c: s) {
    if(c >= 'a' && c <= 'z') output.push_back('A' + c - 'a');
    else if(c >= 'A' && c <= 'Z') output.push_back('a' + c - 'A');
   }
   return output;
}

int main() {

    string s;
    cout << endl << "Enter a string to toggle: ";
    getline(cin, s);
    string res = toggle(s);
    string res2 = toggle(s);
    cout << endl << res << endl;
    cout << endl << res2 << endl;
    return 0;
}