void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<bool> &left_row, vector<bool> &upper_diag, vector<bool> &lower_diag, int n) {
        if(col == n) {
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row++) {
            if(!left_row[row] and !upper_diag[n - 1 + col - row] and !lower_diag[col + row]) {
                board[row][col] = 'Q';
                left_row[row] = true;
                upper_diag[n - 1 + col - row] = true;
                lower_diag[col + row] = true;
                
                solve(col + 1, board, ans, left_row, upper_diag, lower_diag, n);
                
                board[row][col] = '.';
                left_row[row] = false;
                upper_diag[n - 1 + col - row] = false;
                lower_diag[col + row] = false;
            }
        }
     }
     
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        
        for(int i = 0; i < n; i++) {
            board[i] = s;
        }
        
        vector<bool> left_row(n, false), upper_diag(2 * n - 1, false), lower_diag(2 * n - 1, false);
        solve(0, board, ans, left_row, upper_diag, lower_diag, n);
        return ans;
    }
