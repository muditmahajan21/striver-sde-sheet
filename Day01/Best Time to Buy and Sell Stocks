int maxProfit(vector<int>& prices) {
        int ans = 0;
        int min_value = prices[0];
        int i, n = prices.size();
        
        for(i = 1; i < n; i++) {
            min_value = min(min_value, prices[i]);
            ans = max(ans, prices[i] - min_value);
        }
        
        return ans;
    }
