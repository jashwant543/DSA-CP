#include<bits/stdc++.h>
using namespace std;
int main()
{
long long   t;
cin>>t;
for(int i=t;i>0;i--)
{
    int n;
    cin>>n
    int s[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                if(_gcd(s[i],s[1]>1)
                c++;
            }
           else if(i!==j)
           {
               if(_gcd(s[i],s[j]>1)
                c++;
           } 

        }
    }
    cout<<c<<"\n";   
}

return 0;
}