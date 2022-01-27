#include<bits/stdc++.h>
using namespace std;

void CheckNum(int N)
{

    int v[N+1];
 memset(v,true,N+1);
    for(int i=2;i<=N;i++)
    {
        if(v[i]==true)
        cout<<i<<" ";
        for(int j=i*i;j<=N;j=j+i)
        v[i]=false;
    }
}

int main()
{
    int N=10;
    CheckNum(N);
    return 0;

}