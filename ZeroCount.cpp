#include <bits/stdc++.h>
using namespace std;

# define ll long long int;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

  string s;
  cin>>s;
  int mz = 0 , z =0;
  for(int i=0;i<s.length();i++)
  {
      if(i>0 && s[i]==s[i-1])
      continue;

    if(s[i]=='0')
    mz++;
  }
  if(mz!=0 && mz!=1)
  cout<<mz+1<<"\n";
  else
  {
      cout<<mz<<"\n";
  }
  


    }
    return 0;
}