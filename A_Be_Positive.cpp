#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int s,p;

   cin>>s;
   int temp=0;
   int a[s];
   for(int i=0;i<s;i++)
   {
       cin>>a[i];
   }
   sort(a,a+s);
   if(s%2==0)
   p=s/2;
   else
   {
       p=s/2+1;
   }
   for(int i=0;i<s;i++)
   {if(a[i]>=0)
    temp=i;
   break;
   }
   if(temp+1>=p)
   cout<<p+1;
   else
   {
       cout<<"0";
   }
   return 0;
   
   
   

}