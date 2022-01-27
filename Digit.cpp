#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double XY;
    cin>>XY;
    double temp = XY - (int)XY;
    temp *=10;
    if(temp <= 2)
    cout<<(int)XY<<"-";
    else if(temp>=2 && temp<=6)
     cout<<(int)XY;
     else if(temp>=7 && temp<=9)
     cout<<(int)XY<<"+";
     
     return 0;

}