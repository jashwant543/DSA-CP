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
       long long  int n;
        cin>>n;
        while(n/2>2)
        {
            n=n/2;
        }
        if(n%2==0)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
        }
        t--;
    }
return 0;
}