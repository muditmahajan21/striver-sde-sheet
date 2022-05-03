int lengthOfLongestSubstring(string s) {
        map<int, int> mp;
        
        int ans = 0, i, j = -1, n = s.length();
        for(i = 0; i < n; i++) {
            if(mp.find(s[i]) != mp.end()) {
                j = max(j, mp[s[i]]);
            }
            mp[s[i]] = i;
            ans = max(ans, i - j);
        }
        return ans;
    }
