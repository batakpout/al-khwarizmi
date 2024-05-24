#include<iostream>
using namespace std;

//apply 10% tax
void applyTax1(int income) {
   income = (1 - 0.10) * income; // (100% - 10%) = 90% of 100
   cout << endl<< "income: " << income << endl; // 10% of 100 = 10
}

void applyTax2(int &income) { // pass by reference variable
   income =  income - income * 0.10;
}

int main() {

    int income=100;
    applyTax1(income);
    cout << endl << income << endl;

    applyTax2(income);
    cout << endl << income << endl;
    return 0;
}