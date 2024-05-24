#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/**
According to the Pythagorean theorem, the distance 𝑑  from the origin (0,0) to the point
 (x,y) is given by: 𝑑 = sqrt(x*x + y * y)

 Draw the Triangle: Draw a right triangle where the horizontal leg extends from the origin to (3,0) 
 and the vertical leg extends from (3,0) to (3,4). 
 Calculate the Hypotenuse: The hypotenuse of this right triangle is the distance from the origin to the point (3,4).
 
*/
/**
 Sample Input:
{ (2,3), (1,2), (3,4), (2,4), (1,4) }

Sample Output:
{ (1, 2), (2, 3), (1, 4), (2, 4), (3, 4) }

*/
bool compare(pair<int, int> p1, pair<int, int> p2) {
   float x1 = sqrt(p1.first * p1.first + p1.second * p1.second);
   float x2 = sqrt(p2.first * p2.first + p2.second * p2.second);
   return x1 < x2;
}

int main() { 

    vector<pair<int, int>> v = {{2,3}, {1,2}, {3,4}, {2,4}, {1,4}};
    sort(v.begin(), v.end(), compare);

    cout << endl;
    for (const auto& p : v) {
        cout << "(" << p.first << ", " << p.second << "), ";
    }
    cout << endl;
    return 0;
}
