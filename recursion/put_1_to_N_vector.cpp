#include<iostream>
#include<vector>
using namespace std;

vector<int> pushToVector(int curr, int N, vector<int> v) {

     if(curr > N) return v;
     v.push_back(curr);
     return pushToVector(curr + 1, N, v);
}

 vector<int> generateSequence(int N) {
    //vector<int> v(N) ; initialize it with 0 ,0 ,0, 0, 0 if N is 5 and then push item to that
    vector<int> v;
   return pushToVector(1, N, v);
 }

int main() {

    vector<int> res = generateSequence(5);
    for(int x: res) {
        cout << x << " ";
    }
    cout << endl;


    return 0;
}