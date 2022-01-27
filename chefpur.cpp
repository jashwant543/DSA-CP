#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x;
        cin>>n>>x;
        vector<int> v;
        for(int i = 0; i<n ; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<int>());
        if(v[0] >= x)
        cout<<1<<"\n";
        else
        {
            int  sum = v[0];
            for(int i = 1; i<v.size(); i++)
            {
                sum = sum + v[i];
                if(sum >= x)
               { cout<<i+1<<"\n";
                break;
               }

            }
            if(sum < x)
            cout<<-1<<"\n"
        }
        
        
    }
    return 0;
}