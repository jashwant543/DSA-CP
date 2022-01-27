#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0)
    {
        long long int n,k;
        cin>>n;
        double x,d;
        for(int k=2;k<=n;k++)
        {
            d=pow(2,k);
            d=d-1;
            x=n/d;
            if((int)x==x)
            {cout<<(int)x<<"\n";
            break;
            }
        }
        t--;
    }
    return 0;
}