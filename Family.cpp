#include<bits/stdc++.h>
using namespace std;
int main()

{
   
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;
   cin>>n;
   
//    set<string> s1;
//    set<string> s2;
vector<pair<string,string>> v;
   for(int i=0;i<n;i++)
   {
       string a ,b ;
       cin>>a>>b;
       v.push_back(make_pair(a,b));
       
   }
    for(int i =0;i<n;i++)
    {
        for(int j =1 ;j<n;j++)
        {
            if(v[i].first==v[j].first && v[i].second==v[j].second)
            {cout<<"Yes";
            return 0;
            }
        }
    }
    cout<<"No";
    return 0;
//    if(s1.size()!=n && s2.size()!=n)
//    cout<<"YES";
//    else
//    {
//        cout<<"NO";
//    }
//    return 0;


}