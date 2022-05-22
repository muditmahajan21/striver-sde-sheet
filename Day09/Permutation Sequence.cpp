string getPermutation(int n, int k) {
        string ans = "";
        string num = "";
        vector<int> fact(n + 1);
        fact[0] = 1;
        
        for(int i = 0; i < n; i++) {
            fact[i + 1] = (i + 1) * fact[i];
            num += to_string(i + 1);
        }
        
        k--;
        
        for(int i = n - 1 ; i >= 0; i--) {
            int ind = k / fact[i];
            k %= fact[i];
            ans += num[ind];
            num.erase(num.begin() + ind);
        }
        return ans;
    }