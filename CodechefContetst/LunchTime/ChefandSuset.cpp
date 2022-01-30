#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> a;
        vector<int> b;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
            
        }
          for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
            
        }
       
        for(int i=0;i<n;i++)
        {
            v[i] = abs(a[i] - b[i]);
        }
     
         int i =0;
        for (i= 0;i<n;i++)
           {if(v[i]!=x || v[i]!=y)
            
            {
                cout<<"NO"<<"\n";
                //Temp = false;
                break;
            }
        
        }
        
        if(i==n)
        cout<<"YES"<<"\n";
       
}
    return 0;
}
        

