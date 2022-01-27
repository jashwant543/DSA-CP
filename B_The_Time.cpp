#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,t,a;
    cin>>h>>m;
    cin>>a;
    t=m+a;
    if(t>60)
    {m=t%60;
    h+=t/60;
    }
    if(h>23)
    h=h%24;
if(h<10)
cout<<"0"<<h<<":";
else
{
    cout<<h<<":";
}
if(m<10)
cout<<"0"<<m;
else
{
    cout<<m;
}
return 0;



    
}