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
        int x;
        cin>>x;
         vector<string> v = { "North","East","South","West"};
         
         x = x%4;
          cout<<v[x]<<"\n";
          t--;
    }
    return 0;


}