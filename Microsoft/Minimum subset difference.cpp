// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  
  int sum=0;
  vector<vector<bool>>dp;
    void isSubsetSum(int arr[],int n)
    {
        for(int i=0;i<=n;i++)dp[i][0]=true;
        for(int j=0;j<=sum;j++)dp[0][j]=false;
        dp[0][0]=true;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        
        
        
    }
	int minDifference(int arr[], int n)  
	{
	    
	    // Your code goes here
	    for(int i=0;i<n;i++)sum+=arr[i];
	    dp=vector<vector<bool>>(n+1,vector<bool>(sum+1));
	    isSubsetSum(arr,n);
	    int ans=INT_MAX;
	    for(int i=0;i<=sum;i++)
	    {
	        if(dp[n][i])
	        {
	            ans=min(ans,abs(sum-2*i));
	        }
	    }
	    return ans;
	    
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
