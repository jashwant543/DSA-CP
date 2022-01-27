#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string p,q,r;
    cin>>p>>q>>r;
    for(int i=0;i<r.length();i++)
    {
    for(int j=0;j<p.length();j++)
    {
        if(r[i]==p[j])
    {r[i]=q[j];
    break;}
    else if(r[i]==p[j]-32)
    {r[i]=q[j]-32;
    break;}
    }
    }
    cout<<r;
    return 0;
}