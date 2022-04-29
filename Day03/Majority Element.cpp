int majorityElement(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        
        for(auto num: nums) {
            if(!count) {
                ans = num;
                count++;
            } else {
                if(ans == num) {
                    count++;
                } else {
                    count--;
                }
            }
        }
        
        return ans;
    }