#include<bits/stdc++.h>
using namespace std;
int countSetBit(int r)
{
    int res = 0;
    while(r > 0)
    {
        r = (r & (r - 1));
        res++;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int n;
        cin>>n;
       
       
            int i = 3;
            while(n!=0)
            {
               if( countSetBit(i) % 2 == 0)
               {
                   cout<<i<<" ";
                   n--;
                   
               }
               i++;
               
                
            }
            cout<<"\n";
    }
    return 0;
}
        