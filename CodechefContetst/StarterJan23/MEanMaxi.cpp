#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int n;
        cin>>n;
        int a[n];
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
             cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        sum =sum+a[i];
      
      cout<<sum<<" ";
        float temp1 = (sum / (n-1));
        cout<<temp1<<" ";
        //cout<<(float)(temp1 + a[n-1])<<"\n";
    }
    return 0 ;
}

