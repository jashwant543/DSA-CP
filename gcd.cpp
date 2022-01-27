#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    return a;
else
{
    gcd(b,a%b);
}
return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
int lcm=gcd(a,b);
int LCM=0;
LCM=(a*b)/lcm;
cout<<LCM;
return 0;
}
