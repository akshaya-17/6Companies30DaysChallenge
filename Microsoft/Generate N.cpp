// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	vector<string>res;
	int i;
	for( i=1;i<=N;i++)
	{
	    string tmp="";
	    int tmp1=i;
	    while(tmp1>0)
	    {
	        //cout<<((tmp1%2)-'0')<<endl;
	       
	        char c=((tmp1%2)+'0');
	        tmp.insert(tmp.begin(),c);
	        tmp1/=2;
	    }
	    
	  res.push_back(tmp);  
	    
	}
	return res;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
