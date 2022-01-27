#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,x,y;
        cin>>n>>p>>x>>y;

        int a[n];
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        
        }

        if(p == 1)
        cout<<y<<"\n";
        else
        {
            int one = 0 , zero = 0;
            for(int i = 0 ;i<p;i++)
            {
                if(a[i]==1)
                one++;
                else
                {
                    zero++;
                }
                
            }
            cout<<((one*y) + (zero*x))<<"\n";
        }
        

    }
    return 0;
}