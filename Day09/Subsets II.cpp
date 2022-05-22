void solve(int idx, vector<int> &nums, vector<vector<int>> &ans, vector<int> &res) {
        ans.push_back(res);
        
        for(int i = idx; i < nums.size(); i++) {
            if(i != idx and nums[i] == nums[i - 1]) continue;
            res.push_back(nums[i]);
            solve(i + 1, nums, ans, res);
            res.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(nums.begin(), nums.end());
        solve(0, nums, ans, res);
        return ans;
    }
