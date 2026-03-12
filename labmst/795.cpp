class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int tc = 0;
        int wt = 0;
        int s = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > right) {
                s = i + 1;
                wt = 0;
            } else if (nums[i] >= left && nums[i] <= right) {
                wt = i - s + 1;
            }
            
            tc += wt;
        }
        
        return tc;
    }
};