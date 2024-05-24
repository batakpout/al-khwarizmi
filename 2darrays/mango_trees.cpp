#include<iostream>
using namespace std;
/**
Ramu's father has left a farm organized as an N × N grid. Each square in the grid either has or does not have a mango tree.
He has to divide the farm with his three sisters as follows: he will draw one horizontal line and one vertical line to divide
the field into four rectangles. His sisters will choose three of the four smaller fields and he gets the last one.

He wants to divide the field so that he gets the maximum number of mangos possible(max of the mins), assuming that his sisters will pick 
the best three rectangles.

For example, suppose the field looks as follows:

      . # # . . .
      # . . # # .
      . # . . . .
      . # # . . #
      # . . # # .
      . # . . . .
      
Ramu can ensure that he gets at least 3 mango trees by cutting as follows:

        . # | # . . .
        # . | . # # .
        . # | . . . .
      ------+---------
        . # | # . . #
        # . | . # # .
        . # | . . . 
*/


/**
                 S1     |   s2
                        |
                      -------
                        |
               s3       |      s4
           
 */


/*
 O(N^4) i.e O(N^2 * N^2) -- for brute force approach
 10^8 = 1 sec to execute
 10^12 = 10000 sec, so TLE error
*/
void bruteForce(vector<vector<char>> arr, int r, int c) {
    int ans=0;
    int s1,s2,s3,s4;
    for(int row =0;row<r-1;row++) {
        for(int col=0;col<c-1;col++) {
           s1 = s2 = s3 = s4 = 0;
            //s1
            for(int i=0;i<=row;i++) {
                for(int j=0;j<=col;j++) {
                    if(arr[i][j] == '#') s1++;
                }
            }

            //s2
            for(int i=0;i<=row;i++) {
                for(int j=col+1;j<c;j++) {
                    if(arr[i][j] == '#') s2++;
                }
            }

             //s3
            for(int i=row+1;i<r;i++) {
                for(int j=0;j<=col;j++) {
                    if(arr[i][j] == '#') s3++;
                }
            }

            //s4
            for(int i=row+1;i<r;i++) {
                for(int j=col+1;j<c;j++) {
                    if(arr[i][j] == '#') s4++;
                }
            }
            //finding max of mins
            int m = min(s1, min(s2, min(s3,s4)));
            ans = max(ans, m);

        }
    }

    cout << endl << "ans = " << endl;
}

void usingPrefixSum(vector<vector<char>> arr, int r, int c) {
    vector<vector<int>> aux(r, vector<int>(c));
    //build extreme left column first
    for(int i=0;i<r;i++) {
        
        if(arr[i][0] == '#') aux[i][0] = 1;
        else aux[i][0] = 0;
        
        if(i != 0) 
        aux[i][0] += aux[i-1][0];
    }

    //build extreme top row 
    for(int j=0;j<c;j++) {
        
        if(arr[0][j] == '#') aux[0][j] = 1;
        else aux[0][j] = 0;
        
        if(j != 0) 
        aux[0][j] += aux[0][j-1];
    }

    //build rest of the matrix
     for(int i=1;i<r;i++) { 

        for(int j=1;j<c;j++) {
        
        if(arr[i][j] == '#') 
            aux[i][j]= 1 + aux[i-1][j] + aux[i][j-1] - aux[i-1][j-1];
        else 
            aux[i][j]=aux[i-1][j] + aux[i][j-1] - aux[i-1][j-1];
       }
    }

    for(auto crr: aux) {
        for(int c: crr) {
            cout << c << " ";
        }
        cout << endl;
    }
    int s1,s2,s3,s4;
    int ans=0;
    //O(N^2) as we make N^2 cuts
    for(int i=0;i<r;i++) {
        s1=s2=s3=s4=0;
        for(int j=0;j<c;j++) {
            s1 = aux[i][j];
            s2 = aux[i][c-1] - s1;
            s3 = aux[r-1][j] - s1;
            s4 = aux[r-1][c-1] - (s1+s2+s3);
            int m = min(s1, min(s2, min(s3,s4)));
            ans = max(ans, m);
        }
    }

    cout << endl << "ans = " << ans << endl;

}

int main() {

    cout << "Enter r, c:" << endl;
    int r, c;
    cin >> r >> c;

    vector<vector<char>> arr(r, vector<char>(c));

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> arr[i][j];

    cout << "Entered array:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //bruteForce(arr, r, c);
    usingPrefixSum(arr, r, c);
    return 0;
}