#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n,m;
    cin>>t;
    while(t)
    {
        cin>>x>>n>>m;
        int temp=0;
        temp=pow(2,n);
        x=x/temp+n*10;
        if(x<0)
        {cout<<"YES"<<"\n";
        break;
        }
        else
        {
            
            x=x-m*10;
        }
        if(x<0)
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
        }
        t--;
    }
}