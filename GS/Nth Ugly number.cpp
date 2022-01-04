class Solution {
public:
    int nthUglyNumber(int n) 
    {
        priority_queue<long int,vector<long int>,greater<long int>>minhp;
        unordered_set<long int>mp;
       long int dp[n];
        dp[0]=1;
        mp.insert(1);
        for(int i=1;i<n;i++)
        {
            
           if(mp.find(dp[i-1]*2)==mp.end()) 
           {
               mp.insert(dp[i-1]*2);
               minhp.push(dp[i-1]*2);
           }
           if(mp.find(dp[i-1]*3)==mp.end()) 
           {
               mp.insert(dp[i-1]*3);
               minhp.push(dp[i-1]*3);
           }
           if(mp.find(dp[i-1]*5)==mp.end()) 
           {
               mp.insert(dp[i-1]*5);
               minhp.push(dp[i-1]*5);
           }
            dp[i]=minhp.top();
            minhp.pop();
        }
        return dp[n-1];
    }
};
