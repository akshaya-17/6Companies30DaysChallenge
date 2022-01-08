class Solution {
public:
    int longestMountain(vector<int>& arr) {
       
        int ans=0,base=0;
        int n=arr.size();
        while(base<n)
        {
            int end =base;
            while(end+1<n && arr[end]<arr[end+1])end++;
            if(end!=base)
            {
                int tmp=end;
                while(end+1<n && arr[end]>arr[end+1])end++;
                if(tmp!=end)ans=max(ans,end-base+1);
                
            }
            
            base=max(base+1,end);
            
        }
        
        return ans;
    }
   
};
