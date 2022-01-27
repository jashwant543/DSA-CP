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
       int n , a ,b,c;
       cin>>n>>a>>b>>c;
       int totalDish;

    if(a>c)
    {
        int temp = min(a , b);
        totalDish = temp + min(c , b - temp);
    }
    else
    {
       int temp = min(c , b);
        totalDish = temp + min(a , b - temp);
    }
    

       if(totalDish >= n)
       cout<<"YES"<<"\n";
       else
       {
           cout<<"NO"<<"\n";
       }
   }
   return 0;
}
       
       