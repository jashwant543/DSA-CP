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
        int temp = n/3;
        while(temp--)
        {
            cout<<"abc";
        }
        if(n%3==1)cout<<"a"<<"\n";
        else if(n%3==2)cout<<"ab"<<"\n";
        else 
        cout<<"\n";
        
    }
    return 0;
}