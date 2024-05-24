/**
 * Given co-ordinates of N points on X-Y axis, your task is to sort them 
   in accordance to the x-coordinate. If the x-coordinates are same then 
   compare y-coordinates.
   Sample Input: {(3, 4), (2, 3), (3, 7), (1, 5), (3, 4)} 
   Sample Output: {(1, 5), (2, 3), (3, 4), (3, 4), (3, 7)} 
*/
#include<iostream>
using namespace std;
/**
 The const and & in const pair<int, int> & p1 are important and serve specific purposes.
 const: It indicates that the object referenced by p1 cannot be modified through p1. In other words,
 p1 is a read-only reference to a pair<int, int>. This helps ensure that the function doesn't 
 inadvertently modify the pair passed to it.
 & (ampersand): It denotes that p1 is a reference to a pair<int, int> rather than a copy of the pair. 
 Using a reference avoids the overhead of copying the entire pair when passing it to the function.
This is particularly beneficial for large objects like pairs.
By using const pair<int, int> & p1, you achieve both efficiency (by passing a reference) and 
safety (by ensuring the pair cannot be modified within the function).
using const pair<int, int> & p1 strikes a balance between efficiency and safety,
 making it a common and recommended practice for passing objects to functions in C++.
*/
bool compare(const pair<int,int> & p1, const pair<int,int> & p2) {
    if(p1.first != p2.first) return p1.first < p2.first;
    else return p1.second < p2.second;
}

vector<pair<int,int>> sortCartesian(vector<pair<int,int>> arr) {
    sort(arr.begin(), arr.end(), compare);
    return arr;
}

int main() {

    vector<pair<int, int>> points = { {3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4} };
    vector<pair<int, int>> sorted_points = sortCartesian(points);
 
    cout << "{ ";
    /**
     * here & is a reference to the elements of sorted_points rather than a copy of the elements themselves.
       Using a reference avoids the overhead of copying elements and allows direct access to the elements
       of sorted_points within the loop
    */
    for (const auto& point : sorted_points) {
        cout << "(" << point.first << ", " << point.second << "), ";
    }
    cout << "}\n";

    return 0;
}