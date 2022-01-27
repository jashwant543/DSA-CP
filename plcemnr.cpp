#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char  f ,s,t , x,y;
        cin>>f>>s>>t;
        cin>>x>>y;
        vector<char> v;
        v.push_back(f);
        v.push_back(s);
        v.push_back(t);
        int minx ,miny;
        for(int i = 0 ;i <3;i++)
        {
            if(v[i]==x)
            minx = i;
            else if(v[i]==y)
            miny = i; 
        }
        if(minx < miny)
        cout<<x;
        else
        {
            cout<<y;
        }
        
    }
    return 0;
}