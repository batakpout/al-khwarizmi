#include<iostream>
#include<string>
#include <set>

using namespace std;

//Expected Time Complexity : O(N)

string removeDuplicate(string s){
    
    /**
     set automatically orders its elements in ascending order. When you insert characters into a set,
     it sorts them by their natural order (in this case, the order of characters in the ASCII table).
     set constructor takes two iterators, indicating the range of elements to be copied
     into the set.
    */
    set<char> ss(s.begin(), s.end());
    string str;
 
    for (auto x : ss)
       str.push_back(x);
 
    return str;
}

//O(N) + SortComplexity
string remove(string str) {
     int n = str.length();
    if (n <= 1) return str;
    //In ASCII encoding, there are 256 possible characters
     vector<bool> arr(256, false);
     string output;
     for(int i=0;i<n;i++) {
       char c = str[i];
       if(!arr[c]) {
         output +=c;
         arr[c] = true;
       }    
     }
     sort(output.begin(), output.end());
     return output;
}

int main() {
   
    string s;
    getline(cin, s);
    string res = remove(s);
    string res2 = removeDuplicate(s);
    cout << endl << res << endl;
    cout << endl << res2 << endl;
    return 0;
}
