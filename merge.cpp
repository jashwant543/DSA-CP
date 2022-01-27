#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int n,int l,int h,int m)
{
    int i=0,j=m+1;
    while (i<=m&&j<n)
    {
        if(a[i]<a[j])
        {cout<<a[i]<<" ";
        i++;
        }
        else
        {
            cout<<a[j]<<" ";
            j++;

        }
        
    }
    while(i<m)cout<<a[i]<<" ";
    while (j<n)
    {
        cout<<a[j]<<" ";
    }
    
    
    
}
int main()
{
    int a[]={10,15,20,40,8,11,15,22,25};
    merge(a,9,0,8,3);
    return 0;
}