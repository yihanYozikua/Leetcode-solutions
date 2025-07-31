/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        // convert all int in the vectors into float
        // merge two vectors
        // sort the merged vector
        // find out if the size of vector is odd or even
            // if odd: find the middle index
            // if even: find the two indexs which is in the middle of the vector
        
        int sizeOfmerge = nums1.size() + nums2.size();
        vector<float> convertTemp( nums1.size(), 0.0 );
        
        for( int i = 0; i < nums1.size(); i++ ){
            convertTemp[i] = (float) nums1[i];
        }
        for( int i = 0; i < nums2.size(); i++ ){
            convertTemp.push_back( (float) nums2[i] );
        }
        sort( convertTemp.begin(), convertTemp.begin() + sizeOfmerge );

        int median_index = 0;
        float result = 0.0;
        if( (convertTemp.size())%2 == 0 ){ // if even
            median_index = convertTemp.size() / 2;
            result = ( convertTemp[median_index] + convertTemp[median_index-1] )/2;
        }
        else{ // if odd
            median_index = convertTemp.size() / 2;
            result = convertTemp[median_index];
        }
        
        return result;
        
    }
};
// @lc code=end

