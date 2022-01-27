#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            v.push_back(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            v.push_back(a[i]);
        }
        int gcd=0;
        for(int i=0;i<v.size();i++)
        {
             for(int j=i+1;j<v.size();j++)
           { if(__gcd(v[i],2*v[j])>1)
            gcd++;
           }
        }
        cout<<gcd<<"\n";
        t--;
    }
    return 0;
}