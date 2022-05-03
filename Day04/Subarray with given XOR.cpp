int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    map<int ,int> mp;
    int temp = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        temp ^= A[i];
        if(temp == B) ans++;
        int remain = temp ^ B;
        if(mp.find(remain) != mp.end()) {
            ans += mp[remain];
        }
        mp[temp]++;
    }
    return ans;
}
