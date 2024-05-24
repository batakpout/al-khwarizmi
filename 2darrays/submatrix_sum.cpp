#include <vector>
#include<iostream>
using namespace std;
/**
 Submatrix Sum
Given a matrix of size M x N, there are large number of queries to find submatrix sums. Inputs to queries are left top and
right bottom indexes of submatrix whose sum is to find out.

How to preprocess the matrix so that submatrix sum queries can be performed in O(1) time.

INPUT FORMAT:

Given a matrix (2d vector) and query.. Each query has Starting row, Starting column, Ending row, Ending column.
OUTPUT FORMAT:

A single integer which is the sum of the submatrix.
Example :

sr :  Row number of top left of query submatrix
sc :  Column number of top left of query submatrix
er :  Row number of bottom right of query submatrix
ec :  Column number of bottom right of query submatrix
 
Input: mat[M][N] = {{1, 2, 3, 4, 6},
                    {5, 3, 8, 1, 2},
                    {4, 6, 7, 5, 5},
                    {2, 4, 8, 9, 4} };
Query1: sr = 0, sc = 0, er = 1, ec = 1
Query2: sr = 2, sc = 2, er = 3, ec = 4
Query3: sr = 1, sc = 2, er = 3, ec = 3;

==prefix sum array for above:
1  3  6  10 16 
6  11 22 27 35 
10 21 39 49 62 
12 27 53 72 89 
 
Output:
Query1: 11  // Sum between (0, 0) and (1, 1)
Query2: 38  // Sum between (2, 2) and (3, 4)
Query3: 38  // Sum between (1, 2) and (3, 3)

refer to screenshot for reference
*/
int calculatePrefixSum(const vector<vector<int>>& v, int sr, int sc, int er, int ec) {
    int rows = v.size();
    int cols = v[0].size();

    vector<vector<int>> aux(rows, vector<int>(cols));
    aux[0][0] = v[0][0];

    // Calculate extreme left column
    for (int i = 1; i < rows; i++)                                      
        aux[i][0] = v[i][0] + aux[i-1][0];
    

    // Calculate extreme top row
    for (int j = 1; j < cols; j++) 
        aux[0][j] = v[0][j] + aux[0][j - 1];
    

    // Calculate rest of the elements
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            aux[i][j] = v[i][j] + aux[i - 1][j] + aux[i][j - 1] - aux[i - 1][j - 1];
        }
    }

    int sum = aux[er][ec];
    if(sr > 0) sum -= aux[sr-1][ec];
    if(sc > 0) sum -= aux[er][sc-1];
    if(sr > 0 and sc > 0) sum += aux[sr-1][sc-1];


    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 6},
        {5, 3, 8, 1, 2},
        {4, 6, 7, 5, 5},
        {2, 4, 8, 9, 4}
    };

    cout << "Enter sr, sc, er, ec:" << endl;
    int sr,sc,er,ec;
    cin>>sr>>sc>>er>>ec;

    int sum = calculatePrefixSum(matrix, sr, sc, er, ec);

    // Output the prefix sum matrix
    cout << endl << "sum = " << sum << endl;

    return 0;
}
