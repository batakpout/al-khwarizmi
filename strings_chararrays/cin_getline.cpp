#include<iostream>
using namespace std;

int main() {

    //cin.getline(chararray, size) works with char array where as getline(cin, str) with string
    char sentence[1000];
    cin.getline(sentence, 1000); //terminates with new line in the console
    cout << endl << "===Output of what u entered===" << endl;
    cout << sentence << endl;

    cout << "now enter sentence with new line but terminate with #" << endl;
    char paragraph[1000];
    cin.getline(paragraph, 1000, '.');
    //cin.getline(paragraph, 1000, '\n'); better use this method
    cout << endl << "===Output of what paragraph u entered===" << endl;
    cout << paragraph << endl;
    return 0;
    
}