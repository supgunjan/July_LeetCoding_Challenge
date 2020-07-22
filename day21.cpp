class Solution {
public:
    
    bool dfss(vector<vector<char>> &board,int cnt, int i, int j, string word)
    {
        if(cnt == word.length()) return true;
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[cnt] )
        {
            return false;
        }
        char t = board[i][j];
        board[i][j] = ' ';
        
        bool ans = dfss(board,cnt+1,i-1,j,word) || dfss(board,cnt+1,i+1,j,word) || dfss(board,cnt+1,i,j+1,word) || dfss(board,cnt+1,i,j-1,word);
        
        board[i][j] = t;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i = 0 ; i < board.size() ; i++)
        {
            for(int j = 0 ; j < board[i].size() ; j++)
            {
                if(board[i][j] == word[0] && dfss(board,0,i,j,word))
                    return true;
            }
        }
        return false;
    }
};
