int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        for(i = 0; i < nums.size(); i++) {
            while(i < nums.size() - 1 and nums[i] == nums[i + 1]) i++;
            nums[j++] = nums[i];
        }
        return j;
    }
