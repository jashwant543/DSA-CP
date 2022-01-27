#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string p,q;
    set<string> s;
    
    while(t--)
    {
        cin>>p;
        cin>>q;
        s.insert(p);
        s.insert(q);
    }
    cout<<s[0];
   // cout<<s.size();
    return 0;
}