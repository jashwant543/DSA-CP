#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         string s;
         cin>>s;
         int c =0;
         for(int i =0;i<n;i++)
         {
                 if(i+k<n && s[i] =='1')
                 {
                     if(s[i+k] == '0')
                     {
                         s[i+k] = '1';
                         c++;
                     }
                 }
                 else  if(i-k<n && s[i-k] != s[i] && i-k>0)
                 {
                     
                         //s[i+k] = '1';
                         c++;
                     
                 }
                 else if(i - k < 0 && i+k >= n && s[i]=='1')
                 {
                     s[i] = '0';
                     c++;
                 }
             
         }
            cout<<c<<"\n";
     }
     return 0;
}