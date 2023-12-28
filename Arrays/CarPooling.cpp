/*
    There is a car with capacity empty seats. The vehicle only drives east (i.e., it cannot turn around and drive west).
    You are given the integer capacity and an array trips where trips[i] = [numPassengersi, fromi, toi] indicates that 
    the ith trip has numPassengersi passengers and the locations to pick them up and drop them off are fromi and toi respectively. 
    The locations are given as the number of kilometers due east from the car's initial location.
    Return true if it is possible to pick up and drop off all passengers for all the given trips, or false otherwise.

    Example 1:
    Input: trips = [[2,1,5],[3,3,7]], capacity = 4
    Output: false
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> timestamp(1001, 0);

        for (const auto& trip : trips) {
            timestamp[trip[1]] += trip[0];  // Increase passengers at pickup location
            timestamp[trip[2]] -= trip[0];  // Decrease passengers at drop-off location
        }

        int currentCapacity = 0;
        for (int pass : timestamp) {
            currentCapacity += pass;
            if (currentCapacity > capacity)
                return false;
        }

        return true;
    }
};