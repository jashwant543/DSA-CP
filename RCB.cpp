#include <bits/stdc++.h>
using namespace std;

///# define ll long long int;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(abs(x-y) <= 2*z)
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
        