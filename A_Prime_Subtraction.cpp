#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t>0)
    {
        long long x,y;
        cin>>x>>y;
        x=x-y;
        if(x==1)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
        }
        
       
       t--;

    }
    return 0;

}