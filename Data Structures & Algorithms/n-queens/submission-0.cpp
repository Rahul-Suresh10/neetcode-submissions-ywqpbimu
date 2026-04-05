class Solution {
public:
   void sol(int m,  int x, unordered_set<int>& diag2, unordered_set<int>& dcols, unordered_set<int>& diag1, vector<string>& gameBoard, vector<vector<string>>& res)
   {
    if(m == x)
    {
     res.push_back(gameBoard);
      return;
    }

        for(int j=0;j<x;j++)
        {
            int diff = m - j;
            int sum = m + j;

          if(diag2.count(diff) == 0 && dcols.count(j) == 0 && diag1.count(sum) ==0)
          {
            diag2.insert(diff);
            dcols.insert(j);
            diag1.insert(sum);
            gameBoard[m][j] = 'Q';
            sol(m+1,x,diag2,dcols,diag1,gameBoard,res);
            gameBoard[m][j] = '.';
            diag2.erase(diff);
            dcols.erase(j);
            diag1.erase(sum);
          }
        }
    
   }


    vector<vector<string>> solveNQueens(int n) {


        unordered_set<int> diag1;
        unordered_set<int> dcols;
        unordered_set<int> diag2;

        vector<vector<string>> res;

        vector<string> gameBoard(n, string(n, '.'));

        sol(0,n,diag2, dcols,diag1,gameBoard,res);
        return res;


    }
};
