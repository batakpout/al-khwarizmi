#include<iostream>
using namespace std;

/*
Defense Kingdom
Theodore implements a new strategy game “Defense of a Kingdom”. On each level a player defends the Kingdom 
that is represented by a rectangular grid of cells. The player builds crossbow towers in some cells of the 
grid. The tower defends all the cells in the same row and the same column. No two towers share a row or a 
column.

The penalty of the position is the number of cells in the largest undefended rectangle. For example,
 the position shown on file defensekindom.jpg has penalty 12.

Input Format:
In the function an width and height of the kingdom and a vector of pairs representing positions of towers
 is passed.

Output Format:
Return an integer representing the number of cells in the largest rectangle that is not defended by the towers.
Sample Input:
15 8 
{(3, 8), (11, 2), (8, 6)}

Sample Output:12
*/
//Overall, the dominant term in the TC is sorting step, which is O((n+2) log (n+2)) ~ O(N Log N)
int defkin(int w, int h, vector<pair<int, int>> position) {
    
      vector<int> v1;
      vector<int> v2;
      
      v1.push_back(0);
      v2.push_back(0);
      for (auto p : position) {
        v1.push_back(p.first);
        v2.push_back(p.second);
      }
      v1.push_back(w+1);
      v2.push_back(h+1);
      sort(v1.begin(), v1.end());
      sort(v2.begin(), v2.end());
  
   /// 0 3 4 6  9 15, 6 8 9 10
      int x1 = 0, y1 =0;
      for(int i=0;i<v1.size()-1;i++) {
         x1 = max(x1, v1[i+1] - v1[i] - 1);
         y1 = max(y1, v2[i+1] - v2[i] - 1);
      }
      return x1 * y1;
}

int main() {
//{(3, 8), (11, 2), (8, 6)}
   vector<pair<int, int>> points = { {3,8}, {11, 2}, {8, 6}};
   int result = defkin(15, 8, points);
   cout << endl << "result: " << result << endl;
    return 0;
}