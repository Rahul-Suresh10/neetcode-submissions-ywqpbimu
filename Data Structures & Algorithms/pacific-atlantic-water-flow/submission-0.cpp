class Solution {
public:


void bfs(int i, int j,vector<vector<int>>& heights, vector<vector<int>>& ocean)
{
    
        int n = heights.size();
        int m = heights[0].size();

    vector<vector<int>> visited(n, vector<int>(m,0));
    queue<pair<int,int>> q;
    

    q.push({i,j});
    visited[i][j] = 1;


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


          if(row >= 0 && col >= 0 && row < n && col < m && visited[row][col] == 0 && heights[row][col] >= heights[point.first][point.second] && ocean[row][col] == 0)
          {
            ocean[row][col] = 1;
            q.push({row, col});
          }
        }
    }

}




    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        int n = heights.size();
        int m = heights[0].size();




        vector<vector<int>> pacific(n, vector<int>(m,0));
        vector<vector<int>> atlantic(n, vector<int>(m,0));


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 || j == 0)
                {
                    pacific[i][j] = 1;
                }
                if(i==n-1 || j == m-1)
                {
                    atlantic[i][j] = 1;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j == 0)
                {
                    bfs(i,j,heights, pacific);
                }

                if(i==n-1 || j == m-1)
                {
                    bfs(i,j,heights, atlantic);
                }
          
            }
        }

        vector<vector<int>> res; 

         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pacific[i][j] == 1 && atlantic[i][j] == 1)
                {
                    
                    res.push_back({i,j});
                }

          
            }
        }



  return res;
        
    }
};
