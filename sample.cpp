#include<bits/stdc++.h>
using namespace std;
void move(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<n;j++)
           swap(a[i],a[j]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    move(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
}
