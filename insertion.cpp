#include<bits/stdc++.h>
using namespace std;
void insert(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}
int main()
{
    int n=5;
    int a[]={20,50,40,10,60};
    insert(a,n);
    return 0;
}