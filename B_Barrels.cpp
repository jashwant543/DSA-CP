#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,i;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
        long long int a[n];
        for(i=0;i<n;i++)
       {cin>>a[i];
       }
         sort(a, a+ n, greater<int>());
       long long int sum=0;
     for( i=0;i<=k;i++)
     sum+=a[i];


     cout<<sum<<endl;;
     
    }
    return 0;
}