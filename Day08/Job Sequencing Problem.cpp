bool comp(struct Job A, struct Job B) {
        return A.profit > B.profit;
    }
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr + n, comp);
        
        vector<bool> free(n + 1, false);
        int ans = 0, profit = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = min(n, arr[i].dead); j >= 1; j--) {
                if(!free[j]) {
                    free[j] = true;
                    profit += arr[i].profit;
                    ans++;
                    break;
                }
            }
        }
        
        return {ans, profit};
    } 
};
