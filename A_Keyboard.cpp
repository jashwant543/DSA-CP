#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string p="qwertyuiopasdfghjkl;zxcvbnm,./";
char c[2];
cin>>c;
    string q;
    cin>>q;
    if(c[0]=='R')
    {
    for(int i=0;i<q.length();i++)
    {
        for(int j=0;j<p.length();j++)
        {
          if(q[i]==p[j])
         { q[i]=p[j-1];
         break;
         }
          
        }
    }
    }
    else
    {
        for(int i=0;i<q.length();i++)
    {
        for(int j=0;j<p.length();j++)
        {
          if(q[i]==p[j])
          {q[i]=p[j+1];
          break;}
        }
    }
    }
    
    cout<<q;
}