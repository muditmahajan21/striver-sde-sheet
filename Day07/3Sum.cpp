vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int target = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(i and nums[i] == nums[i - 1]) continue;
            int low = i + 1;
            int high = nums.size() - 1;
            while(low < high) {
                int temp_sum = nums[low] + nums[high] + nums[i];
                
                if (temp_sum < target) {
                    low++;
                } else if (temp_sum > target) {
                    high--;
                } else {
                    ans.push_back( {nums[i], nums[low], nums[high]} );
                    while(low < high and nums[low] == nums[low + 1]) low++;
                    while(low < high and nums[high] == nums[high -  1]) high--;
                    low++;
                    high--;
                }
            }
        }
        return ans;
    }
