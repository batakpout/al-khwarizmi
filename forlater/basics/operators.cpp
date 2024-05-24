#include<iostream>
using namespace std;
int main() {
   
   int a = 17/5; // 3
   cout << endl << a << endl;

   float b = 17/5; // 3
   cout << endl << b << endl;

   float c =(float) 17/5; // 3.4 type-casting (changing the data type)
   cout << endl << c << endl;

  // float d = 14/9 % 3.7; error: invalid operands to binary expression

   char d = 17%5; // 2, ASCII for 2 is blank , so no output
   cout << endl << d << endl;

   char e = 100 / 2; //2, ASCII 50 corresponds to the character '2'
   cout << endl << e << endl;
   return 0;
}