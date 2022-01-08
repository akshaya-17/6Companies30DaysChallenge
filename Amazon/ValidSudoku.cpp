class Solution{
public:
    int m,n;
    
    int isValid(vector<vector<int>> mat){
        // code here
        m=mat.size();
        n=mat[0].size();
        int cnt;
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++)
        {
            cnt=0;
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!=0)
                {
                    cnt++;
                    mp[mat[i][j]]++;
                }
            }
            if(cnt!=mp.size())return 0;
            mp.clear();
        }
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cnt=0;
            for(int j=0;j<m;j++)
            {
                if(mat[j][i]!=0)
                {
                    cnt++;
                    mp[mat[j][i]]++;
                }
            }
            if(cnt!=mp.size())return 0;
            mp.clear();
            
        }
        mp.clear();
        for(int i=0;i<m;i+=3)
        {
            for(int j=0;j<n;j+=3)
            {
                cnt=0;
                for(int r=i;r<(i+3);r++)
                {
                    for(int c=j;c<(j+3);c++)
                    {
                        if(mat[r][c]!=0)
                        {
                            cnt++;
                            mp[mat[r][c]]++;
                        }
                    }
                }
                if(cnt!=mp.size())return 0;
                mp.clear();
            }
        }
       
        return 1;
    }
};
