#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b,k;
    cin>>b>>k;
    int a[k];
    int odd=0;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        odd++;
    }
    if(odd==k-1)
   { cout<<"even";
    return 0;   
   }
    if(odd%2==0)
    {
        //if(odd%2==0)
    cout<<"even";
    // else
    // {
    //     cout<<"odd";
    // }
    
    }
    // else if(odd%2!=0&&b%2==0)
    else
    {
        cout<<"odd";
    }
    return 0;
}