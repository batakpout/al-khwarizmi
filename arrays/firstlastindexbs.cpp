
#include<iostream>
//#include <tuple>
using namespace std;
//TC: O(log n)
int firstIndex(int arr[], int n, int d) {

    int l = 0;
    int h = n-1;
    int fi = -1;

    while(l<=h) {
      int mid = l + (h-l)/2;
      if(d > arr[mid]) 
        l = mid + 1;
      else if(d < arr[mid])
       h = mid - 1;
       else { //d = arr[mid]
         h = mid-1;
         fi = mid;
       }  
    }
    return fi;

}

//TC: O(log n)
int lastIndex(int arr[], int n, int d) {
    int l = 0;
    int h = n-1;
    int li = -1;

    while(l<=h) {
      int mid = l + (h-l)/2;
      if(d > arr[mid]) 
        l = mid + 1;
      else if(d < arr[mid])
       h = mid - 1;
       else { //d = arr[mid]
         l = mid+1;
         li = mid;
       }  
    }
    return li;
}

int main() {
    
   int n, d;
   cout << endl;

   cout << "enter size of array:" << endl;
   cin>>n;

//has to contain duplicates
   cout << endl << "enter array:" << endl;
   int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << endl << "enter d:" << endl;
    cin>>d;

    //total TC: O(2*log n)
    /**
     However, in big O notation, constant factors are typically ignored, so the time complexity for both methods 
     combined can be simplified to O(log n). Therefore, the overall time complexity remains O(log n)
    */
    int first = firstIndex(arr, n, d);
    int last = lastIndex(arr, n, d);

    cout << "First index: " << first << endl;
    cout << "Last index: " << last << endl;

    return 0;
}