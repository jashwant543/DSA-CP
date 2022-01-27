#include<bits/stdc++.h>
using namespace std;
int table[256];
void intilize(int n)
{
    table[0]=0;
    for(int i=1;i<256;i++)
    table[i]=(i&1)+table[i%2];
}
int greater(int n)
{
    int res=0;
    res=res+table[n & 0xff];
    n>>8;
    res=res+table[n & 0xff];
    
    n>>8;
    res=res+table[n & 0xff];
    
    n>>8;
    res=res+table[n & 0xff];
    return res;


}
int main()
{
    int n=13;
    intilize(n);
    
    int t=greater(n);
    cout<<t;
    return 0;
}