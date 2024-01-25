/*
    You are given a 0-indexed array of strings words and a character x.
    Return an array of indices representing the words that contain the character x.
    Note that the returned array may be in any order.

    Example 1:
    Input: words = ["leet","code"], x = "e"
    Output: [0,1]
    Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for(int i=0;i<words.size();i++) {
            string str = words[i];
            for(int j=0;j<str.size();j++) {
                if(str[j]==x) {
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
    }
};