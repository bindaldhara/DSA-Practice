class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
         for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                int count= 0;
                for (int k= i-1; k <= i+1; k++){
                    for (int l= j-1; l<= j+1; l++){
                        if (k >= 0 && k< board.size() && l >= 0 && l < board[0].size()
                           && (k != i || l != j) 
                           && (board[k][l] == 1 || board[k][l] == 2)){
                            count++;
                        }
                    }
                }
                if (board[i][j] == 0 && count == 3){
                    board[i][j] = 3;
                }
                if (board[i][j] == 1 && (count < 2 || count > 3)){
                    board[i][j] = 2;
                }
            }
        }
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                if (board[i][j] == 3){
                    board[i][j] = 1;
                }
                if (board[i][j] == 2){
                    board[i][j] = 0;
                }
            }
        }
    }
};