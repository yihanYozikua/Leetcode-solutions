/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        int temp[m][n];
        
        if( obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1){
            return 0;
        }
        
        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ ){
                
                if( obstacleGrid[i][j] == 1 ){
                    temp[i][j] = 0;
                }
                
                // handle border exception
                else if( (i == 0)&&(j != 0)&&( temp[0][j-1] == 0 ) ){
                    temp[i][j] = 0;
                }
                else if( (j == 0)&&(i != 0)&&( temp[i-1][0] == 0 ) ){
                    temp[i][j] = 0;
                }
                
                
                else if( i == 0 || j == 0 ){
                    temp[i][j] = 1;
                }
                else{
                    temp[i][j] = temp[i-1][j] + temp[i][j-1];
                }
            }
        }
        return temp[m-1][n-1]; 
    }
};
// @lc code=end

