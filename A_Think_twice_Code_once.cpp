#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    long long int n;
    cin>>n;
   long long  int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
long long int sum=0;
   sort(a,a+n);
  
   if(a[0]<0)
   {
   for(i=0;i<2;i++)
   a[i]=-a[i];
   }

   for(i=0;i<n;i++)
   sum+=a[i];

   cout<<sum;

    
    return 0;
}