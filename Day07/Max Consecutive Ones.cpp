int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, temp = 0;
        for(auto e: nums) {
            if(e) temp++;
            else temp = 0;
            ans = max(ans, temp);
        }
        return ans;
    }
