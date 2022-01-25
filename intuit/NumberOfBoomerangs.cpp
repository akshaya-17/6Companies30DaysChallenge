class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points)
    {
        
        int ans=0;
        for(int i=0;i<points.size();i++)
        {
            unordered_map<int,int>mp;
            for(int j=0;j<points.size();j++)
            {
                if(i==j)continue;
                int d=computeDist(points[i],points[j]);
                cout<<d<<endl;
                mp[d]++;
            }
            for(auto m:mp)
            {
                int n=m.second;
 
                if(m.second>1)ans+=(n)*(n-1);
            }
            mp.clear();
        }
        
        return ans;
        
    }
    int computeDist(vector<int>point1,vector<int>point2)
    {
        return ((pow(point1[0]-point2[0],2)+pow(point1[1]-point2[1],2)));
        
    }
