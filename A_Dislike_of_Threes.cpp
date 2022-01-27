#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; 
    cin>>t;
    for(int j = 0 ;j < t ;j++)
    {
        int k ;
        cin>>k;
        

        if(k<=2)
       { cout<<k<<"\n";
        continue;
       }
       int temp = 0;
        int i =1;

     while(1)
       {
           if(i%3!=0 && i%10!=3)
           {
               
               temp++;
           }
           if(temp==k)
           {cout<<i<<"\n";
           break;
           }
           else
           {
               i++;
           }
           
       }
    }
    return 0;
}