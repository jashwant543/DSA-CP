#include<bits/stdc++.h>
using namespace std;
powerOfTwo(int k)
{
     if(k==0)
   return false;
 
   return (ceil(log2(k)) == floor(log2(k)));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int k ; 
        cin>>k;

        if(k%2 !=0)
        cout<<0<<"\n";
        else if(powerOfTwo(k)==true)
        cout<<log2(k)<<"\n";
        else
        {int count = 0;
            while(k%2==0)
            {
                count++;
                k = k/2;
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}