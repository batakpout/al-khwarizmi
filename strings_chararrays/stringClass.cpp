#include<iostream>
#include<string>
using namespace std;
int main() {

    //char str [1000]; way to create string, less flexible as need to mention size etc
    string s1 = "String in Cpp1";
    string s2("String in Cpp1");
    cout  << s1 << endl << s2 << endl;

    cout << "Enter a paragraph ending with . :" << endl;
    string s;
    //getline(cin, s); // even takes spaces but end on new line
    getline(cin, s, '.'); // even takes spaces ends on .
   
   for(char c: s) {
    cout << c;
   }
   cout << endl;
   // cout << s << endl;

   cin.get();
   int n=5;
   cout << "Enter 5 strings:" << endl;
   vector<string> sarr;
   string temp;
   while(n--) {
    getline(cin, temp);
    sarr.push_back(temp);
   }

   cout << endl << "Printing vector array:" << endl;
   for(string s : sarr) {
    cout << s << endl;
   }

  
    return 0;
}