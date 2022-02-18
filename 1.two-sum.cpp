/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        
        for( int i = 0; i < nums.size() ; i++ ){
            for( int j = i+1; j < nums.size(); j++ ){
                if( (nums[i] + nums[j]) == target ){
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
                else{
                    continue;
                }
            }
        }
        return {};
    }
};
// @lc code=end

