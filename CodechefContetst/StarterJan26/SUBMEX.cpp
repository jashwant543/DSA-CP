#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int n , x ,k;
        cin>>n>>k>>x;
        if(k <x)
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<int> v;
        while(n)
        {
            for(int i=0;i<x;i++)
           { v.push_back(i);
            n--;
            if(n==0)break;
           }

        }
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "<<"\n";
    }
    return 0;
}