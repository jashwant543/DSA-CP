#include<bits/stdc++.h>
using namespace std;
int main()
{
long long   t,q,r;
cin>>t;
for(int i=t;i>0;i--)
{long long n,k;
    cin>>n>>k;
   // n--;
     long long count=0;
    while(n!=0)
    {
       if(n%k==0)
       {n=n/k;
       count++;}
       else
        {
           long long  rem=n%k;
            count+=rem;
            n-=rem;
        }
       
     }
     cout<<count<<endl;
 }

return 0;
}