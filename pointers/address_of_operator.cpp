
#include<iostream>
using namespace std;
int main() {

  int x = 10;
  double y = 5.4;

  cout << &x << endl; //hexadecimal // &Bucket
  cout << &y << endl; //8 bytes apart as double takes 8 bytes

  return 0;
}