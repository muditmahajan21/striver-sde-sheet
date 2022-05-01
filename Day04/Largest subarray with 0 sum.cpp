int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        map<int, int> mp;
        int sum = 0;
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            
            if(!arr[0] and !ans) ans++;
            if(!sum) ans = i + 1;
            
            if(mp.find(sum) != mp.end()) {
                ans = max(ans, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        
        return ans;
    }
