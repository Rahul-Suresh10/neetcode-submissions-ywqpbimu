class Solution {
public:
    void dfs(int i, int j, vector<vector<bool>>& visited, vector<vector<char>>& board, string word, int w, bool& res)
    {

        if(board[i][j] != word[w] || visited[i][j])
        {
            return;
        }

        if(w == word.size()-1)
        {
            res = true;
            return;
        }

        visited[i][j] = true;

        vector<int> drow = {-1, 0, 1, 0};
        vector<int> dcol = {0, 1, 0, -1};


        for(int k=0;k<4;k++)
        {
            int r = i + drow[k];
            int c = j + dcol[k];

            if(r>=0 && c >=0 && r < board.size() && c < board[0].size() && board[r][c] == word[w+1])
            {
                dfs(r,c, visited,board, word, w+1, res);
            }
        }
        visited[i][j] = false;
    }


    bool exist(vector<vector<char>>& board, string word) {

        bool res = false;
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));

for(int i=0;i<board.size();i++)
{
    for(int j=0;j<board[0].size();j++)
    {
         dfs(i,j,visited, board, word, 0, res);
    }
}


        return res;


        
    }
};
