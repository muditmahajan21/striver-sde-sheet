int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int i, n = nums.size();
        int curr_sum = nums[0];
        
        for(i = 1; i < n; i++) {
            if(curr_sum < 0) {
                curr_sum = nums[i];
            } else {
                curr_sum += nums[i];
            }
            ans = max(ans, curr_sum);
        }
        return ans;
    }