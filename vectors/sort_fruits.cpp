#include<iostream>
using namespace std;

bool comp(pair<string,int> a, pair<string, int> b) {
    return a.second < b.second;
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> &v, string S){
    /**
     No custom comparator is needed in if part because the default behavior is to compare the first element (string) of each pair.
    */
    if(S=="name") sort(v.begin(), v.end());
    else sort(v.begin(), v.end(), comp);
    return v;
}

int main() {

  vector<pair<string, int>> v = { {"Mango",100}, {"Guava",70}, {"Grapes",40}, {"Apple",60}, {"Banana",30} };
  
  cout << "Choose sort by price or name" << endl;
  string s;
  getline(cin, s);
  sortFruits(v, s);

  for(const auto p: v) {
    cout << "(" << p.first << "," << p.second << ")" << " ";
  }
  cout << endl;
 return 0;
}