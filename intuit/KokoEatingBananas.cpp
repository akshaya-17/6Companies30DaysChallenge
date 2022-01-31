class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=r;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            int currHours=helper(piles,mid); //with mid as speed no. of hours it takes
           
            if(currHours<=h) //if time is less than given time move left
            {
                ans=mid;
                r=mid;
            }
            else
            {
                l=mid+1;
            }
            
            
            
            
        }
        return ans;
        
    }
    int helper(vector<int>& piles,int currSpeed)
    {
        int val=0;
        for(auto& pile:piles)
        {
            
            val+=ceil(pile*1.0/currSpeed);
        }
        
        return val;
        
    }
};
