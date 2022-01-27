#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
     int a[2];
      a[0]=0;
        a[1]=0;
    while(n>0)
    {
        int x,y;
        cin>>x>>y;
        
       
      
        if(a[0]<=x&&a[1]<=y)
        {
            a[0]=x;
            a[0]=y;
        }
        n--;
        
    }
    cout<<a[0]+a[1];
    return 0;
}