int count = 0;
    
    void merge(vector<int> &nums, int start, int end, int mid)
    {
        int l = start;
        int r = mid + 1;

        while (l <= mid and r <= end) 
        {
            if((long)nums[l] > (long) 2 * nums[r])
            {
                count += (mid + 1 - l);
                r++;
            }
            else
            {
                l++;
            }
        }

        sort(nums.begin() + start, nums.begin() + end + 1);
    }

    void merge_sort(vector<int> &nums, int start, int end)
    {
        if(start == end) return;

        int mid = (start + end) / 2;
        merge_sort(nums, start, mid);
        merge_sort(nums, mid + 1, end);

        merge(nums, start, end, mid);
    }
    int reversePairs(vector<int>& nums) {
        count = 0;
        merge_sort(nums, 0, nums.size() - 1);
        return count;
    }
