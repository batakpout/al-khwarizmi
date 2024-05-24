#include<iostream>
using namespace std;

//bit of a confusion headed down

void watchVideo1(int views) {
   views = views + 1;
}

void watchVideo2(int *views) {
   *views = *views + 1; //dereferencing
}

int main() {

    int views=100;
    watchVideo1(views);
    cout << endl << views << endl;

    watchVideo2(&views);
    cout << endl << views << endl;
    return 0;
}