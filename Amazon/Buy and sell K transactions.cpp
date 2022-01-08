class Solution {
  public:
  int dp[501][2][201];
    int memo(int k,int n,int a[],int idx,bool canBuy)
    {
        if(idx==n)return 0;
        if(k==0)return 0;
        if(dp[idx][canBuy][k]!=-1)return dp[idx][canBuy][k];
        int idle,buy,sell;
        if(canBuy)
        {
            idle=memo(k,n,a,idx+1,canBuy);
            buy=memo(k,n,a,idx+1,!canBuy)-a[idx];
           return  dp[idx][canBuy][k]=max(idle,buy);
        }
        else
        {
            idle=memo(k,n,a,idx+1,canBuy);
            sell=memo(k-1,n,a,idx+1,!canBuy)+a[idx];
           return  dp[idx][canBuy][k]=max(idle,sell);
        }
        
        
        
    }
    int maxProfit(int k, int n, int a[]) {
        // code here
        memset(dp,-1,sizeof(dp));
        return memo(k,n,a,0,true);
    }
};
