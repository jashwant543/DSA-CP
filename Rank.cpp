#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int d1,t1,dm1,d2,t2,dm2;
        int sum1 = 0  , sum2 =0;
        cin>>d1>>t1>>dm1;
        cin>>d2>>t2>>dm2;
        sum1 = d1+t1+dm1;
        sum2 = d2+t1+dm2;
        if(sum1 > sum2)
        cout<<"DRAGON"<<"\n";
        else if(sum1 == sum2)
        {
            if(d1 > d2 )
            cout<<"DRAGON"<<"\n";
            else if(d1 == d2 && t1 > t2)
            cout<<"DRAGON"<<"\n";
           else  if(d2 > d1)
            cout<<"SLOTH"<<"\n";
            else if(d1 == d2 && t2 > t1)
            cout<<"SLOTH"<<"\n";
            else if(d1 == d2 && t1 ==t2 && dm1 == dm2)
            cout<<"TIE"<<"\n";
        }
        else if(sum2 > sum1)
        cout<<"SLOTH"<<"\n";
    }
    return 0;
}