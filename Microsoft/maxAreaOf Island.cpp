// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int r,c;
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        r=grid.size();
        c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {ans=max(ans,dfs(grid,i,j));}
            }
        }
        
      return ans;  
    }
    bool isValid(int m,int n)
    {
        if(m<0||n<0||m>=r||n>=c)return false;
        return true;
    }
    int dfs(vector<vector<int>>& grid,int x,int y)
    {
        if(!isValid(x,y)||grid[x][y]==0||grid[x][y]==-1)return 0;
        grid[x][y]=-1;
        return 1+dfs(grid,x+1,y)+dfs(grid,x-1,y)+dfs(grid,x,y+1)+dfs(grid,x,y-1)+dfs(grid,x+1,y+1)
        +dfs(grid,x+1,y-1)+dfs(grid,x-1,y-1)+dfs(grid,x-1,y+1);
        
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
