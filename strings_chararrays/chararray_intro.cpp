#include<iostream>
using namespace std;
/**
 * In C, C++, strings are represented as arrays of characters terminated by a null character,
   often denoted as '\0'
 * Using '\0' at the end of the character array is necessary for C and C++ functions that 
   work with strings to recognize where the string ends. Functions like strlen(), strcpy(),
   etc. rely on this null character to determine the end of the string.
*/
int main() {

    char a[100];
    cout << endl << a; //prints garbage
    cout << endl << """--break1---";
    
    //wrong way, no null at last,prints garbage at last
    char b[100] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'e', 'f'}; 
    cout << endl << b;
    cout << endl;

    char c[100] = {'a', 'b', 'c', '\0'}; //right way, it ends with null
    cout << c; // no need of loop, just directly outputs to the console
    cout << endl;
    
    char d[] = "abcdefg"; //no need to mention size and \0 at end, automatically adjusted.
    cout << d;

    cout << endl;

    cout << strlen(d) << endl;//7 no of visible chars
    cout << sizeof(d) << endl;//7 no of visible chars +1 for null character

    cout << endl;
    //char e[]; compiler don't allow this
    char e[100];
    //int e[100]; cin e; throws CTE, for int e[100] we have to use loop to input
    cin>>e; // problem is it won't take space separated values and drop them
    //once it starts scanning input buffer, it reads space as \0 as it encounters it and drop everything after space

    cout<<e << endl;

    return 0;
}