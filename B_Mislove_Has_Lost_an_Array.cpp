#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,r;
    cin>>n>>l>>r;
    int max=0,min=0,i;
    int a[n];
    for(i=0;i<n;i++)
    {
        if(i<r)
        {
        a[i]=pow(2,i);
        max+=a[i];
        }
        else
        {
            a[i]=a[i-1];
            max+=a[i];
        }
        
    }
    int temp=n-l+1;
    int m=1;
    for(i=0;i<temp;i++)
    {
        a[i]=1;
        min+=a[i];
    }
    for(i=1;i<=n-temp;i++)
    {
       // a[temp]=pow(2,i);
        m*=2;
        min+=m;
       // temp++;
    }
    cout<<min<<" "<<max;
    return 0;
}