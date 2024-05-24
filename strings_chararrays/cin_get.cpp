#include<iostream>
using namespace std;
int main() {
    /**
     * As soon as we enter new line in console the console sends the chars
       to the input buffer and cin.get picks chars from there one by one
    */
     
    char temp = cin.get();
    cout << endl << temp << endl;
    //while(temp !='\n')
    int counter = 0;
    while(temp !='#') {
       cout << temp;
       /*
        cin.get(); below gets next char from buffer, waits
        user to input more chars from console till it encounter '#' in this case, then
        breaks out of the while loop if it encounters so
       */
       temp = cin.get();
       counter++;
    }
    
    cout << endl << "Counter: "  << counter << endl;

    cout << "Put it in the array: " << endl;

    char sentence[100];
    char t = cin.get();
    int l = 0;

    //could add a check here to check if l reached size of array
    //but cin.getline() handles it by default
    while(t != '*') {
      sentence[l++] = t; 
      t = cin.get();
    }
    sentence[l] = '\0'; //cin.getline() adds this by default once we hit '\n' on keyboard
    cout << sentence << endl;
    return 0;

    //all of this clutter can be removed by cin.getline()
}