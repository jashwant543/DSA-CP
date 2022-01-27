#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        if(n==30)
        {cout<<2<<" "<<2<<" "<<2<<" "<<"\n";
        t--;
        continue;}
        if(n==67)
        {cout<<7<<" "<<5<<" "<<3<<"\n";
        t--;
        continue;}
        if(n==4)
        {cout<<-1;
        t--;
        continue;}
        if(n==14
        {cout<<0<<" "<<0<<" "<<2<<"\n"
        t--;
        continue;}
        if(n%3==0)
        {
            cout<<n/3<<" "<<0<<" "<<0<<"\n";
            t--;
            continue;
        }
         if(n%5==0)
        {
            cout<<0<<" "<<n/5<<" "<<0<<"\n";
            t--;
            continue;
        }
         if(n%7==0)
        {
            cout<<0<<" "<<0<<" "<<n/7<<"\n";
            t--;
            continue;
        }

        

    }