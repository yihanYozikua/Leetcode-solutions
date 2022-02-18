/*
 * @lc app=leetcode id=1094 lang=cpp
 *
 * [1094] Car Pooling
 */

// @lc code=start
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int increase_amount[1001] =  {0}; // refers to the timeline that the in-used cpu ++
	    int in_use_now = 0; // refers to the amount of the cpu in-used currently

	    // to record the timeline
	    for( int i = 0; i < trips.size(); i++ ){
		    increase_amount[ trips[i][1] ] += trips[i][0];
		    increase_amount[ trips[i][2] ] -= trips[i][0];
        }

        // to count in each point in time
        for( int i = 0; i < 1000; i++ ){
            in_use_now += increase_amount[i];
            if( in_use_now > capacity ) return false;
        }
        return true;

    }
};
// @lc code=end

