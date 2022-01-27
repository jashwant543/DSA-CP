#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    __int64 t;
    // if(n%2==0)
    // {
         t=n/2+n%2;
        if(k<=t)
        {
            t=1+(k-1)*2;
            cout<<t;
        }
        else
        {
            t=2+(k-t-1)*2;
            cout<<t;
       
 
         }
        
    // }
    // else
    // {
    //     {
    //         __int64 temp=n/2+1;
    //         if(k<=temp+1)
    //         {
    //             t=1+(k-1)*2;
    //             cout<<t;
    //         }
    //         else
    //         {
    //             t=2+(k-temp-1)*2;
    //             cout<<t;
    //         }
            
    //     }
    // }
    
    
    
    return 0;
}