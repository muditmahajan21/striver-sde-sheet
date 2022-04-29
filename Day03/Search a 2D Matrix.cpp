bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i, j;
        int low = 0;
        int high = n - 1;
        
        while(low <= high) {
            
            int mid = (low + high) / 2;
            if(matrix[mid][0] == target) {
                return true;
            } 
            if(matrix[mid][m - 1] == target) {
                return true;
            }
            if(matrix[mid][0] < target and matrix[mid][m - 1] > target) {
                int left = 0;
                int right = m - 1;
                int row = mid;
                
                while(left <= right) {
                    int middle = (left + right) / 2;
                    
                    if(matrix[row][middle] == target) {
                        return true;
                    }
                    if(matrix[row][middle] < target) {
                        left = middle + 1;
                    }
                    if(matrix[row][middle] > target) {
                        right = middle - 1;
                    }
                }
                return false;
            }
            if(matrix[mid][0] < target) {
                low = mid + 1;
            }
            if(matrix[mid][0] > target) {
                high = mid - 1;
            }
        }
        return false;
    }
