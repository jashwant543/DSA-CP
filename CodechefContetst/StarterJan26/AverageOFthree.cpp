#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int x ;
        cin>>x;
        int a1 , a2, a3;
        a1 = x;
        a2  =  x /2;
        a3 = (x * 3) - ( a1 + a2);
        cout<<a1<<" "<<a2<<" "<<a3<<"\n";
    }
    return 0;
}

       