#include<bits/stdc++.h>
using namespace std;
int max=100;
int a[max];
int r=-1,f=-1;
void insert()
{
    if(r=max-1)
    cout<<"overflo";
    else if(f=-1&&r=-1)
    {f=0;
    r=0;}
    else
    {
        r=(r+1)%2;
    }
    
}