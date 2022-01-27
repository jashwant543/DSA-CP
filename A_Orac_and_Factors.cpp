#include<bits/stdc++.h>
using namespace std;

int Other(int n)
{
   for(int i=2;i<10;i++)
    {
        if(n%i==0)
        return i;
    }
    return n;
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
    int n,k;
    cin>>n>>k;
    if(n%2==0)
    cout<<(n+(2*k))<<"\n";
    else
    {
        int temp= Other(n);
        temp+=(n+(2*(k-1)));
        cout<<temp<<"\n";
    }
    t--;
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    