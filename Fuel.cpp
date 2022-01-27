#include<bits/stdc++.h>
//# define long long ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,k;

        cin>>x>>y>>a>>b>>k;
         
         x = x + a * k;
          y = y + b * k;

          if(x<y)
          cout<<"PETROL"<<"\n";
         else  if(x == y)
          cout<<"SAME PRICE"<<"\n";
          else if(y<x)
          cout<<"DIESEL"<<"\n";


    }
    return 0;

}