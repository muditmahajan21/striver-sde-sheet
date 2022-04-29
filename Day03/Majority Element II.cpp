vector<int> majorityElement(vector<int>& nums) {
        int ans1 = 0;
        int ans2 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(auto num: nums) {
            if(num == ans1) {
                count1++;
            } 
            else if(num == ans2) {
                count2++;
            }
            else if(count1 == 0) {
                ans1 = num;
                count1++;
            }
            else if(count2 == 0 ){
                ans2 = num;
                count2++;
            }
            else 
            {
                count1--;
                count2--;
            }
        }
        
        count1 = count2 = 0;
        for(auto num: nums) {
            if(num == ans1) count1++;
            else if(num == ans2) count2++;
        }
        
        
        cout << ans1 << " " << ans2;
        
        vector<int> ans;
        if(count1 > nums.size() / 3) ans.push_back(ans1);
        if(count2 > nums.size() / 3) ans.push_back(ans2);
        
        return ans;
    }