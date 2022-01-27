#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    bool ar[101];
    int sum=0;

    memset(ar,true,101);
    for(int i = 1 ;i*i<101;i++)
    {
     if(ar[i]==true)
     sum+=i;
     
     for(int j =i*i ; j<101;j=j+i)
     ar[i] = false;
    }
    cout<<sum;
    return 0;

}