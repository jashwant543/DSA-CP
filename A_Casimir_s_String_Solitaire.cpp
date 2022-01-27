#include <bits/stdc++.h>
using namespace std;

///# define ll long long int;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

  string s;
  cin>>s;
  int ca = 0,cb = 0 ,cc =0;

  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='A')
      ca++;
      if(s[i]=='B')
      cb++;
      if(s[i]=='C') 
      cc++;
  }
 // cout<<ca<<cb<<cc;
   if( (cc == 0 && cb == ca) || (ca == 0 && cc == cb) || ( ca + cc == cb) )
   cout<<"YES"<<"\n";
   
   else
  cout<<"NO"<<"\n";
  
    }
    return 0;
}