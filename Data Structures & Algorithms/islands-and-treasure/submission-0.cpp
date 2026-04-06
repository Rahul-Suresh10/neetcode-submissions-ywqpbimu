class Solution {
public:
    void sol(vector<vector<int>>& grid)
    {

        queue<pair<pair<int,int>,int>> q;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 0)
                {
                    q.push({{i,j}, 0});
                }

            }
        }
        

        vector<int> drows = {-1, 0, 1, 0};
        vector<int> dcols = {0,1,0,-1};


        while(!q.empty())
        {
            pair<pair<int,int>,int> pointD = q.front();
            q.pop();

            pair<int,int> point = pointD.first;
            int level = pointD.second;

            for(int k=0;k<4;k++)
            {
                int row = point.first + drows[k];
                int col = point.second + dcols[k];

                if(row >=0 && row < grid.size() && col >= 0 && col < grid[0].size() && grid[row][col] == INT_MAX)
                {
                    grid[row][col] = grid[point.first][point.second] + 1;
                    q.push({{row,col},level+1});
                    
                }
            }


        }

    }

    void islandsAndTreasure(vector<vector<int>>& grid) {

        sol(grid);


    
    }
};
