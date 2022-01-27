#include <bits/stdc++.h>
using namespace std;

///# define ll long long int;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int l =0 , r =0;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }

        int mini = a[0] , index = -1;
        for(int i = 0; i<n;i++)
        {
            if(mini > a[i])
            {
                mini = a[i];
                index = i;
            }
        }
        if(index == -1)
        cout<<0<<"\n";
        else
        {
        cout<<index+1<<"\n";
       // if()
        for(int i = 0 ;i<index+1 ; i++)
        {
            cout<<l+i<<" "<<r+i<<" "<<1<<"\n";
            l = r+i;
        }

          //cout<<"\n";
        }
    }
    return 0;
}
        
        