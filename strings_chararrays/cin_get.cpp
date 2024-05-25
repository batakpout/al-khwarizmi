#include<iostream>
using namespace std;
     //IT READS ONE CHAR AT A TIME FROM INPUT BUFFER

//when cin.get is manipulated through loops we can get it to enter mutli lines and a delimiter at the end
int main() {
    /**
     * As soon as we enter new line e.g hello in console the console sends the chars
       to the input buffer and cin.get picks chars from there one by one
    */
    char temp = cin.get(); //if we enter hello in console it will just read h and then in while loop next cin.get will get e and so and once done with hello waits for the next char from the user to enter 
    cout << endl<<"First char entered:" << temp << endl;
    //while(temp !='\n')
    int counter = 0;
    while(temp !='#') {
       cout << temp;
       /*
        cin.get(); below gets next char from buffer, waits
        user to input more chars from console till it encounter '#' in this case, then
        breaks out of the while loop if it encounters so
       */
       temp = cin.get();//picks one char at a time from input buffer
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
