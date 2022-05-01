vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> res;
        unordered_map<int, vector<pair<int, int>>> mp;
        vector<int> arr;
        
        arr = nums;
        
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                mp[nums[i] + nums[j]].push_back({ i, j });
            }
        }
        
        for(auto [key, value]: mp) {
            int temp = target - key;
            if(mp.find(temp) != mp.end()) {
                for(auto [a, b]: mp[key]) {
                    for(auto [c, d]: mp[temp]) {
                        if(a != c and b != c and  a != d and b != d) {
                            vector<int> temp_vec {arr[a], arr[b], arr[c], arr[d]};
                            sort(temp_vec.begin(), temp_vec.end());
                            res.insert(temp_vec);
                        }
                    }
                }
            }
        }
        
        vector<vector<int>> ans {res.begin(), res.end()};
        return ans;
    }