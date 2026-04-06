class Solution {
public:


    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        int count = 0;
        vector<vector<int>> visited(n, vector<int>(m, 0));

        queue<pair<pair<int,int>,int>> q;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},count});
                }
            }
        }

        vector<int> drows = {-1,0,1,0};
        vector<int> dcols = {0,1,0,-1};

        while(!q.empty())
        {
            pair<pair<int,int>,int> pointD = q.front();
            pair<int,int> point = pointD.first;
            int min = pointD.second;
            count = min;
            
            q.pop();

            for(int k=0;k<4;k++)
            {
                int row = point.first + drows[k];
                int col = point.second + dcols[k];

                if(row >=0 && col >=0 && row < n && col < m && grid[row][col] == 1)
                {
                    grid[row][col] = 2;
                    q.push({{row,col},min+1});
                    
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }




        return count;

        
    }
};
