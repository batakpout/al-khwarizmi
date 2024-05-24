
#include<iostream>
using namespace std;
//abdgc = a1b2d3g-4c

string asciiDiff(string s) {
   string output;
   output += s[0];
   for(int i=1;i<s.length();i++) {
     char curr = s[i];
     char prev = s[i-1];
     output += to_string((int) curr - prev); //to_string converts int to string, must for concat, doesn't allow otherwise
     output += curr;
   }
   return output;
}

int main() {

    string s;
    cout << endl << "Enter a string: ";
    getline(cin, s);
    string res = asciiDiff(s);
    cout << endl << "ASCII diff string: " <<  res << endl;
    return 0;
}