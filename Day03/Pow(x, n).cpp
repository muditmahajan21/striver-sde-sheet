double myPow(double x, int n) {
        if(n < 0) {
            x = 1 / x;
        }
        long num = abs(n);
        double ans = 1.0;
        
        while(num) {
            if(num % 2) {
                ans*= x;
            }
            x *= x;
            num /= 2;
        }
        return ans;
    }