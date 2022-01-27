#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,sum=0,mediean=0,mean=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];
sum+=a[i];
}
 mean =sum/n;
cout<<mean<<endl;
if(n%2==0)
 mediean = (a[n/2+1-1]+a[n/2-1])/2
else
{
 mediean=a[n/2];
}
cout<<mediean;
return 0;


}