#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i+k<n;i++)
    {
        if(a[i]!=a[i+k])
        {
           c++;
            a[i+k]=a[i];
            if(a[i]==1)
            
            
        }
    }

    cout<<c;
    return 0;
}