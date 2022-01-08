class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
     
        
        vector<int>res;
        priority_queue<pair<int,int>>hp;
        int i;
        for( i=0;i<k;i++)
        {hp.push({nums[i],i});}
        res.push_back(hp.top().first);
        for(;i<nums.size();i++)
        {
            while(!hp.empty() && hp.top().second<=(i-k))
            {
                hp.pop();
            }
            hp.push({nums[i],i});
            res.push_back(hp.top().first);
        }
        
        return res;  
    }
};
