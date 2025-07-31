/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        if( n < 2 ) return n;
        int temp[n+1];
        temp[0] = 0;
        temp[1] = 1;
        
        for( int i = 2; i <= n; i++ ){
            temp[i] = temp[i-1] + temp[i-2];
        }
        return temp[n];  
    }
};
// @lc code=end

