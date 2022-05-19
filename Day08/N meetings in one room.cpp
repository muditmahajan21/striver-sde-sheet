int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>> arr;
        for(int i = 0; i < n; i++) {
            arr.push_back( {end[i], start[i]} );
        }
        sort(arr.begin(), arr.end());
        
        int ans = 0;
        int time = arr[0].first;
        
        for(int i = 1; i < n; i++) {
            if(arr[i].second > time) {
                ans++;
                time = arr[i].first;
            }
        }
        
        return ans + 1; 
    }
