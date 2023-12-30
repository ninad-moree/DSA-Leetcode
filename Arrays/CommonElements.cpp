/*
    Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
    Note: can you take care of the duplicates without using any additional Data Structure?

    Example 1:
    Input:
    n1 = 6; A = {1, 5, 10, 20, 40, 80}
    n2 = 5; B = {6, 7, 20, 80, 100}
    n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
    Output: 20 80
    Explanation: 20 and 80 are the only
    common elements in A, B and C.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> result;

            int i = 0, j = 0, k = 0;
        
            while (i < n1 && j < n2 && k < n3) {
                if (A[i] == B[j] && B[j] == C[k]) {
                    if (result.empty() || A[i] != result.back())
                        result.push_back(A[i]);
                        
                    ++i;
                    ++j;
                    ++k;
                }
                else if (A[i] < B[j])
                    ++i;
                else if (B[j] < C[k])
                    ++j;
                else
                    ++k;
            }
        
            return result;
        }

};