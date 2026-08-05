class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0;i<9;++i) {
            unordered_set<char>row_set;
            unordered_set<char>col_set;
            unordered_set<char>box_set;

            int start_row = (i/3)*3; //for box_set
            int start_col = (i%3)*3; //for box_set

            for (int j=0;j<9;++j) {
                if (board[i][j]!='.') {
                    if (row_set.count(board[i][j])) return 0;
                    row_set.insert(board[i][j]);
                }

                if (board[j][i]!='.') {
                    if (col_set.count(board[j][i])) return 0;
                    col_set.insert(board[j][i]);
                }
                // if its r then the row increases as j increase 3 scanned the box row if its c then it runs in loop 0,1,2 
                int r = start_row+j/3;
                int c = start_col+j%3;
                if (board[r][c]!='.') {
                    if (box_set.count(board[r][c])) return 0;
                    box_set.insert(board[r][c]);
                }
            }
        }    
        return 1;
        }    
};
