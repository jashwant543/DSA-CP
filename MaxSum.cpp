#include<bits/stdc++.h>
using namespace std;

int MAXSUM(int &a[],int n)
{
    int i = 0, temp = a[0] ;
    for(int i = 0; i<n-1;i++)
    {
        a[i] = a[i+1] ;
    }
    a[n-1] = temp;

    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    long long int maxsum = 0;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i =0 ;i<n;i++)
    {
    maxSum += i * a[i];
    }
int j = 1;
    while(j<n)
    {
       int temp = MAXSUM(a,n);
       maxsum = max(temp,maxsum);
       j++;
    }