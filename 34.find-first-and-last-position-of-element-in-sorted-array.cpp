/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        int length = nums.size(), record_front = 0;

        // if null
        if( length == 0 ){
        }
        else{
        // if found
        // search from head and tail
            for( int i = 0; i < length; i++ ){
                if( nums[i] == target ){
                    result[0] = i;
                    record_front = i;
                    break;
                }
            }
            for( int j = length-1; j >= record_front; j-- ){
                if( nums[j] == target ){
                    result[1] = j;
                    break;
                }
            }
        }
        return result;
    }
};
// @lc code=end

