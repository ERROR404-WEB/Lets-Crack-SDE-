// https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& n) {
        while(next_permutation(n.begin(),n.end())) break; 
    }
};