#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        if(n>=s)
        cout<<s<<"\n";
        else
        {
            
            // s = abs(s-n);
            // cout<<abs(s-n)<<"\n";
            cout<<(2*n-s)<<"\n";
          
        }
      

    }
    return 0;
}