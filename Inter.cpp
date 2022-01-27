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
        int n , a , b;
       
        cin>>n>>a>>b;
         string s;
         cin>>s;
         int Zero = 0 , One = 0;

         for(int j =0; j<n; j++)
         {
             if(s[j]=='0')
             Zero++;
             else
             {
                 One++;
             }
             
         }
         cout<<((Zero * a) + ( One * b))<<"\n";
    }
    return 0;
}
         
    