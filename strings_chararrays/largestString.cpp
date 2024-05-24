#include<iostream>
using namespace std;

int main() {
   
    cout << endl;
    int n;
    cout << "Enter size of strings:" << endl;
    cin >> n;
    cin.get(); // after entering n, it takes new line into it else we loop only 4 times for n=5

    int largestLen=0;
    char sentence[1000];
    char largest[1000];

    while(n--) {
      cin.getline(sentence, 1000);
      int len = strlen(sentence);
      if(len > largestLen) {
        largestLen=len;
        strcpy(largest, sentence);
      }
    }
    
    cout << endl << "Largest String is: " << largest << endl;
    return 0;
}
