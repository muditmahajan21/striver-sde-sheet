int longestConsecutive(vector<int>& nums) {
        map<int, int> mp;
        for(auto e: nums) {
            mp[e]++;
        }
        
        int ans = 0;
        int res = 0;
        int curr = 0;
        
        for(auto e: mp) {
            if(mp.find(e.first - 1) == mp.end()) {
                curr = e.first;
                ans = 1;
            } else {
                curr++;
                ans++;
            }
            res = max(ans, res);
        }
        
        return res;
    }