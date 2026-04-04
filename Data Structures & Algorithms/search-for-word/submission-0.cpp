class Solution {
public:
   void dfs(vector<vector<char>>& vt, string word, int i, int j, bool& found, int k, vector<vector<int>>& visited)
   {





    if(k == word.size()-1)
    {
     found = true;
     return;
    }

    visited[i][j] = 1;



    vector<int> drow = {-1, 0, 1, 0};
    vector<int> dcol = {0, 1, 0, -1};

    for(int m=0;m<4;m++)
    {
        int r = i + drow[m];
        int c = j + dcol[m];

        if(r>= 0 && c>=0 && r<vt.size() && c< vt[0].size() && vt[r][c] == word[k+1] && visited[r][c] != 1)
        {
            dfs(vt,word,r, c, found, k+1, visited);
        }
    }
    visited[i][j] = 0;


   }


    bool exist(vector<vector<char>>& board, string word) {

        int k=0;
        bool found = false;

        vector<vector<int>> visited(board.size(), vector<int>(board[0].size(), 0));

        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                   if(board[i][j] == word[0])
                   {
                    visited[i][j] = 1;
                    dfs(board, word, i, j, found, k, visited);
                   }
                   if(found)
                   {
                    return found;
                   }
            }
        }

        return found;
        
    }
};
