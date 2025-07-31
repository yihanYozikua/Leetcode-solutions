/*
 * @lc app=leetcode id=96 lang=cpp
 *
 * [96] Unique Binary Search Trees
 */

// @lc code=start
class Solution {
public:
    int numTrees(int n) {
        // f(n) = f(0)*f(n-1) + f(1)*f(n-2) + ... + f(n-1)*f(0)
        // init: f(0) = f(1) = 1
        int result[n+1];
        result[0] = result[1] = 1;
        for( int i = 2; i <= n; i++ ){
            result[i] = 0;
            for( int j = 1; j <= i; j++ ){
                result[i] += result[j-1] * result[i-j];
            }
        }
        return result[n];
    }
};
// @lc code=end

