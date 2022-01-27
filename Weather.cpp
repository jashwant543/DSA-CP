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
        
        int a1,a2,a3,a4,a5,a6,a7;
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
        int arr[ ] = { a1,a2,a3,a4,a5,a6,a7};
        
        int count = 0;
        for(int i = 0; i<7 ;i++)
        {
            if(arr[i] == 1)
            count++;
        }
        if(count> 7-count)
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
        }
        
        t--;
    }
    return 0;
}