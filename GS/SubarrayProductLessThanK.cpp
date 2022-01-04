class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
       
        if(k<=1)return 0;
        int i=0,j=0;
        int ans=1;
        int cnt=0;
        while(j<nums.size())
        {
            
            ans*=nums[j];
            while(i<nums.size() && ans>=k)
            {
              ans/=nums[i];
              i++;
            }
            cout<<i<<" "<<j<<endl;
            cnt+=j-i+1;
            j++;
            
        }
        return cnt;
        
    }
};
