#include<bits/stdc++.h>
using namespace std;
int main()
{
    string e;
    cin>>e;
    int r;
    cin>>r;
    if(e=="front"&&r==1||e=="back"&&r==2)
    cout<<"L";
    else if(e=="front"&&r==2||e=="back"&&r==1)
    cout<<"R";
    return 0;

}