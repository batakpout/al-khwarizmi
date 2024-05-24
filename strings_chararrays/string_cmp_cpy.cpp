/**
 *strcmp: Positive Value: A positive return value indicates that the first string is greater
  than the second string and viceversa. The positive value is the difference between the ASCII value 
  of the character where the difference was first spotted
*/
#include<iostream>
//#include<cstring>

using namespace std;
int main() {

    char a[100] ="apples are sweet!";
    char b[100];

    string s1 = strcpy(b, a); //strcpy(dest, source) //O(N), linear time
    cout << endl << s1;

    int res1 = strcmp("hello", "hello"); //res1=0
    int res2 = strcmp("healo", "hewlo"); //diff b/w a and w is -22 or -1
    int res3 = strcmp("hewlo", "healo"); //diff b/w w and a is 22 or 1
    
    cout << endl << res1;
    cout << endl << res2;
    cout << endl << res3;

    //string s2 = strcat("www.", "google.com"); can't use literals, also args must be char array
    string cat = strcat(a, b);
    cout << endl << cat;
    cout << endl;
    return 0;
}