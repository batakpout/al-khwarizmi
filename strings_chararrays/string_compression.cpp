#include<iostream>
#include<string>
using namespace std;


//this f input: s = "aaabbcccddaeef" , output1 = "abcdaef"
string strCompress(string s) {
     string res = "";
     res += s[0];
     int n = s.length();

    for(int i=1;i<n;i++) {
        char curr = s.at(i);
        char prev = s.at(i-1);
        if(curr != prev) {
            res += curr;
        }
    }
    return res;

}

//input: s = "aaabbcccddaeefff",  output2: "a3b2c3d2ae2f3"
int compress(vector<char>& chars) {
     string res = "";
     res += chars[0];  
     int count = 1;
   for(int i=1;i<chars.size();i++) {

        char curr = chars[i];
        char prev = chars[i-1];
        if(curr == prev) {
            count++;
        } else {
            if(count > 1) {
                res += to_string(count);
                count = 1;
            }
            res += curr;
        }
    }
    if(count > 1) {
        res += to_string(count);
    }
    return res.length();
}

//input: s = "aaabbcccddaeeffff",  output2: "a3b2c3d2ae2f4"
string strCompressWithFreq(string s) {
    string res = "";
     res += s[0];
     int count = 1;

    for(int i=1;i<s.length();i++) {
        char curr = s[i];
        char prev = s[i-1];
        if(curr == prev) {
            count++;
        } else {
            if(count > 1) {
                res += to_string(count);
                count = 1;
            }
            res += curr;
        }
    }
    if(count > 1) {
        res += to_string(count);
    }
    return res;
}

int main() {

    cout << endl << "Enter a string:" << endl;
    string s;
    getline(cin, s);
    string res1 = strCompress(s);
    string res2 = strCompressWithFreq(s);
       vector<char> c = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    int res3 = compress(c);
    
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    return 0;
}