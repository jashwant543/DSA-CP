#include<bits/stdc++.h>
using namespace  std;
bool cehck(int x)
{
    long long  temp=sqrt(x);
    if(temp*temp==x)
    return true;
    else
    {
        return false;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int a1,a2,b1,b2,max1,max2,min1,min2;
    while(t)
    {
       max1=max(a1,a2);
       max2=max(b1,b2);
       min1=min(a1,a2);
       min2=min(b1,b2);

        
        cin>>a1>>a2;
        cin>>b1>>b2;
        long long  x=(a1*a2)+(b1*b2);
        if(cehck(x)&&max1==max2&& min1+min2==max1)
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
        }
        
        t--;
    }
}
