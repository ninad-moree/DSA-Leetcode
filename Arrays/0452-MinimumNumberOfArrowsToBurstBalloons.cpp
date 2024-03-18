/*
    There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D 
    integer array points where points[i] = [xstart, xend] denotes a balloon whose horizontal diameter stretches between xstart and 
    xend. You do not know the exact y-coordinates of the balloons.
    Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with 
    xstart and xend is burst by an arrow shot at x if xstart <= x <= xend. There is no limit to the number of arrows that can be shot. 
    A shot arrow keeps traveling up infinitely, bursting any balloons in its path.
    Given the array points, return the minimum number of arrows that must be shot to burst all balloons.
    
    Example 1:
    Input: points = [[10,16],[2,8],[1,6],[7,12]]
    Output: 2
    Explanation: The balloons can be burst by 2 arrows:
    - Shoot an arrow at x = 6, bursting the balloons [2,8] and [1,6].
    - Shoot an arrow at x = 11, bursting the balloons [10,16] and [7,12].
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        int arrows = 0;
        int end = INT_MIN;
        
        for (const auto& point : points) {
            if (point[0] > end) {
                arrows++;
                end = point[1];
            }
        }

        if(arrows == 0) 
            return 1;
            
        return arrows;
    }
};