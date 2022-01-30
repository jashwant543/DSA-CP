#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int n,k;
        cin>>n>>k;
        if(n==1)cout<<1<<"\n";
        else if(k==1)cout<<"-1\n";
        else
        {
            for(int i=k;i<=n;i++)cout<<i<<" ";
            for(int i=1;i<k;i++)cout<<i<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
        