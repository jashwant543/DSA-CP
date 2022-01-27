#include<bits/stdc++.h>
using  namespace std;

int main()
{
    
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,m=0,z=0;
        cin>>n;
        int a[n];
      //  vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==-1)
            m++;
            //v.push_back(a[i]);
            else if(a[i]<0)
            {
                m++;
               
                c+=abs(a[i])-1;
            }
            else if(a[i]==0)
            {
               z++;
            }
            else
            {
                c+=a[i]-1;
            }
            
        }

        if(z>0)
        c+=z;
        else if(m%2!=0)
        c+=2;

        cout<<c;

        return 0;
    
}