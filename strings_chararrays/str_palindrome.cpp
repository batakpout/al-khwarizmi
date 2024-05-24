#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str) {
    int s = 0;
    int e = str.length()-1;
    while(s<e) {
        if(str[s] != str[e]) return false;
        s++;
        e--;
    }
    return true;
}

int main() {
   
    string s;
    cin >> s;
    bool res = isPalindrome(s);
    cout << endl << res << endl;
    return 0;
}
