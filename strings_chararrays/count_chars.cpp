#include<iostream>
using namespace std;
int main() {

    char c;
    c = cin.get();
    int spaces=0;
    int alphabets=0;
    int digits=0;
    
    while(c != '\n') {
        if((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) alphabets++;
        else if(c >= '0' and c <= '9') digits++;
        else if(c == ' ' or c == '\t') spaces++;
        c = cin.get();
    }

    cout << endl;
    cout << "Digits: " << digits << endl;
    cout << "Alphabets: " << alphabets << endl;
    cout << "Spaces: " << spaces << endl;
    cout << endl;
    return 0;
}