#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n,k;
  cin>>m>>n>>k;
  if(m+k-1<=n)
  {cout<<m+k-1<<endl;}
  else
  {
    //positions b/w n and k that will be filled
    int filled=n-k+1;
    m-=filled;
    if(m%n==0)
    {cout<<n<<endl;}
    else
      cout<<m%n<<endl;
  }
}
