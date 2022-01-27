#include<bits/stdc++.h>
using namespace std;

int getNum(char s)
{
    if(s == 'a')
    return 1;
    if(s == 'b')
    return 2;
    if(s == 'c')
    return 3;
    if(s == 'd')
    return 4;

    if(s == 'e')
    return 5;
    if(s == 'f')
    return 6;

    if(s == 'g')
    return 7;

    if(s == 'h')
    return 8;
return 0;
}
int main()
{
    string s ;
    cin>>s;
    int temp= getNum(s[0]);
    cout<<temp;
    return 0;
}