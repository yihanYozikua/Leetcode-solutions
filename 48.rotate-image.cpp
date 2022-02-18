/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<vector<int> > &matrix)
    {
        // firstly, swap
        // secondly, reverse
        int col = matrix.size();

        for( int i = 0; i < col; i++ ){
            for( int j = 0; j < i; j++ ){
                swap( matrix[i][j], matrix[j][i] );
            }
        }

        for( int n = 0; n < col; n++ ){
            reverse( matrix[n].begin(), matrix[n].end() );
        }
    }
};
// @lc code=end
