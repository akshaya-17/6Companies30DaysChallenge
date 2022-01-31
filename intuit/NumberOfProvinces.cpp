class Solution {
public:
    vector<int>root,rank;
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
       int n=isConnected.size();
       root=vector<int>(n);
       for(int i=0;i<n;i++)root[i]=i;
       rank=vector<int>(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)continue;
                if(isConnected[i][j])
                {
                    unionSet(i,j);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)ans+=(i==root[i]);
        return ans;
        
    }
    int find(int x)
    {
        if(x==root[x])return x;
        return root[x]=find(root[x]);
    }
    void unionSet(int x,int y)
    {
        int rx=find(x);
        int ry=find(y);
        if(rx!=ry)
        {
            if(rank[rx]>rank[ry])root[ry]=rx;
            else if(rank[ry]>rank[rx])root[rx]=ry;
            else
                root[ry]=rx;
                rank[rx]+=1;
            
        }
        
        
    }
};
