#include<bits/stdc++.h>
using namespace std;
int i;
void game(int n,string s)
{
   int re=0,ro=0,be=0,bo=0;
    for(i=0;i<n;i++)
   { if(i%2==0)
    {
       if((s[i]-'0')%2==0)
       be++;
       else
      bo++;
    }
    else
    {
        if((s[i]-'0')%2==0)
       re++;
       else
      ro++;
    }
   }
    if(n%2==0)
    {
        if(be>0)
        cout<<2<<endl;
        else
        {
            cout<<1<<endl;
        }
        
    }
    else
    {
    if(ro>0)
    cout<<1<<endl;
    else
    {
        cout<<2<<endl;
    }
    
    }
   
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        s.resize(n);
        cin>>s;
        if(n==1)
        {
            if((s[i]-'0')%2==0)
            cout<<2<<endl;
            else
            cout<<1<<endl;
        }
       else
       {
           game(n,s);
       }
       
        

    }
    return 0;
}