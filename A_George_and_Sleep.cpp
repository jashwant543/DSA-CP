#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h[2],m[2];
    for(int i=0;i<2;i++)
{
    cin>>h[i]>>m[i];
}  
h[0]-=h[1];
m[0]-=m[1];
if(m[0]<0)
{m[0]+=60;
h[0]--;}
if(h[0]<0)
h[0]+=24;

cout<<h[0]<<":"<<m[0];
return 0;
    
    }