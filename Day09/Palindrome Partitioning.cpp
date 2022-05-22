bool check_palin(string s, int i, int j) {
        while(i <= j) {
            if(s[i++] != s[j--]) return false;
        }
        return true;
    } 
    
    void solve(vector<vector<string>> &ans, vector<string> &res, string &s, int idx) {
        if(idx == s.length()) {
            ans.push_back(res);
            return;
        }
        
        for(int i = idx; i < s.length(); i++) {
            if(check_palin(s, idx, i)) {
                res.push_back(s.substr(idx, i - idx + 1));
                solve(ans, res, s, i + 1);
                res.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> res;
        solve(ans, res, s, 0);
        return ans;
    }