#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x, y ;
        cin>>x>>y;
         long long int sum = 0;
         sum = x + 2 * y;

        if(sum%2==0)
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
        }

    }
    return 0;

}