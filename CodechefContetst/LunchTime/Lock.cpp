#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int a , b ,c;
        cin>>a>>b>>c;
        vector<int> v;
        v.push_back(a);
          v.push_back(b);
        
          v.push_back(c);
          sort(v.begin(),v.end());
          if(v[0]+v[1] == v[2])
          cout<<"YES"<<"\n";
          else
          {
              cout<<"NO"<<"\n";
          }
    }
    return 0;
}
          
        
