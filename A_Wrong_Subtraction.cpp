#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,p;
    cin>>p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
 
        if(p%10!=0)
            p=p-1;
        else
            p=p/10;
    }
    cout<<p;
    return 0;
}