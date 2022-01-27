#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int n , a;
        cin>>n>>a;
        int temp = n-a;
        cout<<min(temp,a)<<"\n";
    }
    return 0;
}