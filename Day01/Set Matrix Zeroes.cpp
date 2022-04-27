
void setZeroes(vector<vector<int>>& matrix) {
        int i, j, n = matrix.size(), m = matrix[0].size();
        bool row = false;
        bool col = false;
        
        for(i = 0; i < n; i++) {
            if(!matrix[i][0]) {
                col = true;
                break;
            }
        }
        
        for(j = 0; j < m; j++) {
            if(!matrix[0][j]) {
                row = true;
                break;
            }
        }
        
        for(i = 1; i < n; i++) {
            for(j = 1; j < m; j++) {
                if(!matrix[i][j]) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(i = 1; i < n; i++) {
            for(j = 1; j < m; j++) {
                if(!matrix[i][0] || !matrix[0][j]) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(col) {
            for(i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
        
        if(row) {
            for(j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
  }