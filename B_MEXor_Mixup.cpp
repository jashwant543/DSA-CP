#include<bits/stdc++.h>
using namespace std;

int Fun(int a,int b)
{
    vector<int> v;
    if(a==b)
    return 3;
    for(int j = 0;j<a;j++)
    {
        v.push_back(j);
    }
    int XOR = 0;
    for(int j=0;j<v.size();j++)
    {
        XOR = XOR ^ v[j];
    }
    if(XOR==b)
    return v.size();
    
   // cout<<XOR<<" ";

    XOR = XOR^b;
   // cout<<XOR;
    if(XOR==b)
    return v.size() + 1;
    else
    {
        return v.size() +1 ;
    }
    
    
    
        int temp = v.size() + 1;
        temp = temp + (v.size() - 1);
        if(b==0)
        return temp -1;
        else
        {
            return temp;
        }
        
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i = 0 ; i<t; i++)
    {
        int a , b;
        cin>>a>>b;
        int ans = Fun(a,b);
        cout<<ans<<"\n";

    }
    return 0;
}