string encode(string src)
{     
  //Your code here 
  string res="";
  res+=src[0];
  int j=1;
  for(int i=1;i<src.size();i++)
  {
      if(src[i-1]==src[i])
      {j++;
      }
      else
      {
         res+=(j+'0');
         res+=src[i];
         j=1;
      }
      
      
  }
  res+=(j+'0');
  return res;
}     
