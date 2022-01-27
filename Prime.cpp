#include<bits/stdc++.h>
using namespace std;

bool CheckPrime(int N)
{
    if(N==1)
    return false;
    if(N==2||N==3)
    {
        return true;
    }
    if(N%2==0||N%3==0)
    return false;
    for(int i=5;i*i<=N;i += 6)
    {
        if(N%i==0)
        return false;
        if((N%(i+2))==0)
        return false;
    }
    return true;
}
int main()
{
    int N=23;
    if(CheckPrime)
    cout<<"yes";
    else
    {
        cout<<"No";
    }
    return 0;

    
}