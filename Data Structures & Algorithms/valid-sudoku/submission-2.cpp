class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++){
            unordered_set<char>str;
            for(int j = 0;j<9;j++){
                if(board[i][j] =='.')continue;
                if(str.count(board[i][j]))return false;
                str.insert(board[i][j]);
            }
        }
        for(int j = 0;j<9;j++){
            unordered_set<char>stc;
            for(int i = 0;i<9;i++){
                if(board[i][j] =='.')continue;
                if(stc.count(board[i][j]))return false;
                stc.insert(board[i][j]);
            }
        }
        for(int r = 0;r<3;r++){
            for(int c = 0;c<3;c++){
                unordered_set<char>strc;
                for(int i  =r*3;i<r*3+3;i++){
                    for(int j = c*3;j<c*3+3;j++){
                        if(board[i][j] =='.')continue;
                        if(strc.count(board[i][j]))return false;
                        strc.insert(board[i][j]);

                    }
                }
            }
        }
        
        
        
        return true;

        
    }
};