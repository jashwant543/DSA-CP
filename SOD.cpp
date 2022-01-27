#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll Sod(int l , int r)
{
    for(int i =0;i<3;i++)
    {
        if(l>r)
        return 0;
        if(l<=r && l%3==0)
        break;
        else
        {
            l++;
        }
        
    }
    for(int i =0;i<3;i++)
    {
        
        if(l<=r && r%3==0)
        break;
        else
        {
            r--;
        }
        
    
    }
    ll a = (l/3);
    ll b = (r/3);
    return abs(a-b) + 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   cin>>t;
   while(t--)
   {
       int l,r;
       cin>>l>>r;
       cout<<Sod(l,r)<<"\n";
   }
   return 0;
}