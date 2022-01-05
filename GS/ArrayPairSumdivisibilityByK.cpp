class Solution {
  public:
    bool canPair(vector<int> nums, int k)
    {
        // Code here.
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[(nums[i]%k+k)%k]++;
        }
        for(auto m:mp)
        {
            
            if(m.first==0)
            {
                if(m.second%2)return false;
            }
            else
            {
                if(m.second!=mp[k-m.first])return false;
            }
            
        }
        return true;
        
    }
};
