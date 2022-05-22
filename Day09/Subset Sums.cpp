void solve(int idx, int sum, vector<int> &ans, vector<int> &arr) {
        if(idx == arr.size()) {
            ans.push_back(sum);
            return;
        }
        
        solve(idx + 1, sum + arr[idx], ans, arr);
        solve(idx + 1, sum, ans, arr);
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>  ans;
        solve(0, 0, ans, arr);
        return ans;
    }
