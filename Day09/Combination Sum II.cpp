void solve(vector<vector<int>> &ans, vector<int> &res, vector<int> &nums, int target, int idx) {
        if(!target) {
            ans.push_back(res);
            return;
        }
        for(int i = idx; i < nums.size(); i++) {
            if(nums[i] > target) {
                break;
            }
            if(i != idx and nums[i] == nums[i - 1]) {
                continue;
            }
            res.push_back(nums[i]);
            solve(ans, res, nums, target - nums[i], i + 1);
            res.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        solve(ans, res, candidates, target, 0);
        return ans;
    }
