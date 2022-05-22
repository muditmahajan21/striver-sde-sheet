void solve(vector<vector<int>> &ans, vector<int> &res, vector<int> &arr, int target, int idx) {
        if(!target) {
            ans.push_back(res);
            return;
        }
        
        if(idx == arr.size() || arr[idx] > target) {
            return;
        }
        
        res.push_back(arr[idx]);
        solve(ans, res, arr, target - arr[idx], idx);
        res.pop_back();
        solve(ans, res, arr, target, idx + 1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        solve(ans, res, candidates, target, 0);
        return ans;
    }
