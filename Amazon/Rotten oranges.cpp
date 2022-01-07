class Solution {
public:
    int m,n;
   
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int ans=0;
        m=grid.size();
        n=grid[0].size();
        queue<pair<int,int>>q;
        
        int good=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {q.push({i,j});
                
                }
                else if(grid[i][j]==1)good++;
            }
        }
        if(good==0)return 0;
        vector<vector<int>>moves={{0,1},{1,0},{-1,0},{0,-1}};
        int minutes=0;
        
        while(!q.empty())
        {
            int s=q.size();
            minutes++;
                while(s--)
                {
                     int r=q.front().first;
                     int c=q.front().second;
                     q.pop();
                     for(auto move:moves)
                     {
                         int nr=r+move[0];
                         int nc=c+move[1];
                         if(!isValid(nr,nc)||grid[nr][nc]!=1 )continue;
                         grid[nr][nc]=2;
                         q.push({nr,nc});
                         good--;
                         if(good==0)return minutes;
                     }
                }
           
            
            
            
        }
        return -1;
        
        
    }
    bool isValid(int x,int y)
    {
        if(x<0||y<0||x>=m||y>=n)return false;
        return true;
    }
};
