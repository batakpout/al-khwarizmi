#include<iostream>
using namespace std;
/**
  Find displacement:
  Given a long route containing N,S,E,W directions, find the short path to reach location.
*/
int main() {

    cout << "enter route:" << endl;
    char route[1000];
    cin.getline(route, 1000); //by default "\n" delimitation
    int x =0,y=0;
    for(int i=0;route[i] != '\0'; i++) {
        switch(route[i]) {
            case 'N': 
            y++;
            break;
            case 'S': 
            y--;
            break;
            case 'E': 
            x++;
            break;
            case 'W': 
            x--;
            break;
        }
    }

    cout << "x coordinate: " << x<< endl;
    cout << "y coordinate: " << y<< endl;
    
    if(x>=0 and y>=0) { //1st quadrant 
        while(y--) {
            cout<<"N";
        }
        while(x--) {
            cout<<"E";
        }
    } else if(x<0 and y>=0) { //2nd quadrant 
      while(x++){
          cout<<"W";
      }
      while(y--){
          cout<<"N";
      }
    } else if(x<0 and y<0) { //3rd quadrant
      while(x++){
          cout<<"W";
      }
      while(y++){
          cout<<"S";
      }
    }
    else if(x>=0 and y<0) {  //4th quadrant 
        while(x--){
            cout<<"E";
        }
        while(y++){
            cout<<"S";
        }
    }
    cout << endl;
    return 0;
}