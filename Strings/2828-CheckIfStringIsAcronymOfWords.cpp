/*
    Given an array of strings words and a string s, determine if s is an acronym of words.
    The string s is considered an acronym of words if it can be formed by concatenating the first character of each string in 
    words in order. For example, "ab" can be formed from ["apple", "banana"], but it can't be formed from ["bear", "aardvark"].
    Return true if s is an acronym of words, and false otherwise.

    Example 1:
    Input: words = ["alice","bob","charlie"], s = "abc"
    Output: true
    Explanation: The first character in the words "alice", "bob", and "charlie" are 'a', 'b', and 'c', respectively. Hence, s = 
    "abc" is the acronym. 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";

        for(int i=0;i<words.size(); i++) {
            string str = words[i];
            ans += str[0];
        }

        return ans == s;
    }
};