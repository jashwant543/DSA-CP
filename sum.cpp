#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n,int low,int high)
{
    while(low<high)
    {
        swap(a[high],a[low]);
        low++;
        high--;

    }
}
int main()
{
    int a[5],n=5;
    for(int i=0;i<n;i++)
    a[i]=i;
    reverse(a,n,0,4);
    for(int i=0;i,n;i++)
    cout<<a[i]<<" ";
    return 0;

}