#include<iostream>
#include<string>
using namespace std;

int binaryToInteger(string str) {
     int number = stoi(str); //stoi converts string to an integer
     int pos = 0;
     int res = 0;
     while(number > 0) {
        res += (number%10 * pow(2, pos));
        pos++;
        number /= 10;
     }
   return res;
}

int main() {
   
    string s;
    getline(cin, s);
    int res = binaryToInteger(s);
    cout << endl << res << endl;
    return 0;
}
