#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i = 0 ; i<t; i++)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        for(int j = 0 ;j<n;j++)
        {
            if(s[j]=='U')
            {s[j]='D';
          //  continue;
            }
            else if(s[j]=='D')
            s[j]='U';
        }
        cout<<s<<"\n";


    }
    return 0;
}