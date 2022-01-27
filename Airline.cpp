#include<bits/stdc++.h>
using namespace std;


bool Bags(int a ,int b , int c ,int d,int e)
{
   
    if(a+b <= d &&  c <=e)
    return true;
     if(c+b <= d &&  a <=e)
    return true;
     if(a+c <= d &&  b <=e)
    return true;

    else
    {
        return false;
    }
    
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int a, b, c, d, e;
        cin>>a>>b>>c>>d>>e;
        if(Bags(a,b,c,d,e))
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}