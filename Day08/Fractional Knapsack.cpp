bool comp(struct Item a, struct Item b) {
    double d1 = (double)a.value / (double)a.weight;
    double d2 = (double)b.value/  (double)b.weight;
    
    return d1 > d2;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr + n, comp);
        double ans = 0.0;
        int curr = 0;
        
        for(int i = 0; i < n; i++) {
            if(curr + arr[i].weight <= W) {
                curr += arr[i].weight;
                ans += arr[i].value;
            } else {
                int remain = W - curr;
                ans += ((double)remain / (double)arr[i].weight) * arr[i].value;
                break;
            }
        }
        
        return ans;
    }
        
};
