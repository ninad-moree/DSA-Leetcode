/*
    There are n students in a class numbered from 0 to n - 1. The teacher will give each student a problem starting with the student number 0, then 
    the student number 1, and so on until the teacher reaches the student number n - 1. After that, the teacher will restart the process, starting 
    with the student number 0 again. You are given a 0-indexed integer array chalk and an integer k. There are initially k pieces of chalk. When the 
    student number i is given a problem to solve, they will use chalk[i] pieces of chalk to solve that problem. However, if the current number of 
    chalk pieces is strictly less than chalk[i], then the student number i will be asked to replace the chalk. Return the index of the student that 
    will replace the chalk pieces.

    Example 1:
    Input: chalk = [5,1,5], k = 22
    Output: 0
    Explanation: The students go in turns as follows:
    - Student number 0 uses 5 chalk, so k = 17.
    - Student number 1 uses 1 chalk, so k = 16.
    - Student number 2 uses 5 chalk, so k = 11.
    - Student number 0 uses 5 chalk, so k = 6.
    - Student number 1 uses 1 chalk, so k = 5.
    - Student number 2 uses 5 chalk, so k = 0.
    Student number 0 does not have enough chalk, so they will have to replace it.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for(auto i : chalk)
            sum += i;

        long long c = k % sum;

        for(int i=0; i<chalk.size(); i++) {
            if(chalk[i] > c)
                return i;
            c -= chalk[i];
        }

        return 0;
    }
};