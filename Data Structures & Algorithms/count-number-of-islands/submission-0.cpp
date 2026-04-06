class Solution {
public:

   void sol(int i,int j, vector<vector<char>>& grid, vector<vector<int>> &visited)
   {
    queue<pair<int,int>> q;
    q.push({i,j});

    vector<int> drows = {-1,0,1,0};
    vector<int> dcols = {0,1,0,-1};

    while(!q.empty())
    {
        pair<int,int> point = q.front();
        q.pop();

        for(int k=0;k<4;k++)
        {
            int row = point.first + drows[k];
            int col = point.second + dcols[k];

            if(row >= 0 && col >= 0 && row < grid.size() && col < grid[0].size() && grid[row][col] == '1' && visited[row][col] == 0)
            {
                visited[row][col] = 1;
                q.push({row,col});
            }
        }
    }
 
   }



    int numIslands(vector<vector<char>>& grid) {

        int count = 0;

        vector<vector<int>> visited(grid.size(),vector<int>(grid[0].size(), 0));

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == '1' && visited[i][j] == 0)
                {
                    count++;
                    sol(i,j,grid, visited);
                }
            }
        }

        return count;
        
    }
};
