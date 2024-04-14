/*
    You are given a string s representing a 12-hour format time where some of the digits (possibly none) are replaced with a "?".
    12-hour times are formatted as "HH:MM", where HH is between 00 and 11, and MM is between 00 and 59. The earliest 12-hour time is 00:00, and 
    the latest is 11:59. You have to replace all the "?" characters in s with digits such that the time we obtain by the resulting string is a 
    valid 12-hour format time and is the latest possible.
    Return the resulting string.

    Example 1:
    Input: s = "1?:?4"
    Output: "11:54"
    Explanation: The latest 12-hour format time we can achieve by replacing "?" characters is "11:54".
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findLatestTime(string s) {
        if(s[0] == '?' && s[1] == '?' && s[3] == '?' && s[4] == '?') 
            return "11:59";
            
        if(s[0] == '0' && s[1] == '?')
            s[1] = '9';
        
        if(s[0] == '1' && s[1] == '?')
            s[1] = '1';
        
        if(s[1] == '0' && s[0] == '?')
            s[0] = '1';
        
        if(s[1] == '1' && s[0] == '?')
            s[0] = '1';
        
        if(s[0]== '?' && s[1] == '?') {
            s[0] = '1';
            s[1] = '1';
        }
        
        if(s[0] == '?')
            s[0] = '0';
                
        
        if(s[3] == '?')
            s[3] = '5';
        if(s[4] == '?')
            s[4] = '9';
        
        if(s[3]== '?' && s[4] == '?') {
            s[3] = '5';
            s[4] = '9';
        }
        
        return s;
        
    }
};