#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>> n;
        int a[n];
        for(int j =1 ;j<=n;j++)
        {
            cin>>a[j];
        }
        int in = 2;
        while(in <= n)
        {
            if(a[in] % 2 == 0 && a[in-1]%2!=0)
            swap(a[in], a[in-1]);
            else if(a[in] % 2 == 0 && a[in+1]%2!=0)
            {
                if(in+1<=n)
                swap(a[in],a[in+1]);
            }
            

            in += 2;
        }
        int sum = 0;
        for(int  j = 1; j<=n; j++)
        {
           a[j] = (a[j] + j )% 2;
           sum += a[j];

        }
        cout<<sum<<"\n";

        t--;
    }
    return 0;
}