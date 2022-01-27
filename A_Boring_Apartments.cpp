#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,t;
cin>>t;
 
int r,c=0,sum=0;
 
while(t--)
{
    int r,c=0,sum=0;
    cin>>n;
    r=n%10;
sum=10*(r-1);
while(n>0)
{
    c++;
    n=n/10;
}
for(int i=c;i>=1;i--)
{
    sum+=i;
}
cout<<sum<<"\n";
}
return 0;
}