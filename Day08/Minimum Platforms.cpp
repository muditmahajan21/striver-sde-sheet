int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int ans = 0;
    	int j = 0;
    	sort(arr, arr + n);
    	sort(dep, dep + n);
    	
    	for(int i = 1; i < n; i++) {
    	    if(dep[j] >= arr[i]) ans++;
    	    else j++;
    	}
    	
    	return ans + 1;
    }
