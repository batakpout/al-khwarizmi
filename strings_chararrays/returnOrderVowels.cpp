#include<iostream>
#include<string>
using namespace std;


string returnVowels(string str) {
     int n = str.length();
    if (n <= 1) return str;

     string output;
     for(int i=0;i<n;i++) {
       char c =  str[i];
       if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
         output += c;
       }
    }
     return output;

}

string vowel(string S) {
    // your code goes here
    string out;
    for(auto x : S) {
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') out.push_back(x);
    }
    return out;
} 

int main() {
   
    string s;
    getline(cin, s);
    string res = returnVowels(s);
    string res2 = vowel(s);
    cout << endl << res << endl;
    cout << endl << res2 << endl;
    return 0;
}
