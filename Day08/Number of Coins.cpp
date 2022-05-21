int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<int> dp(V + 1, INT_MAX);
	    dp[0] = 0;
	    for(int i = 1; i <= V; i++) {
	        for(int j = 0; j < M; j++) {
	            if(coins[j] <= i) {
	                int res = dp[i - coins[j]];
	                if(res != INT_MAX and res + 1 < dp[i]) {
	                    dp[i] = res + 1;
	                }
	            }
	        }
	    }
	    
	    return dp[V] == INT_MAX ? -1 : dp[V]; 
	} 
