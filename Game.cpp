

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
string Replace(string P , int a)
{
    for(int i=a;i<P.length();i+=2)
    {
        if(P[i]=='?')
        P[i]='R';
    }
     for(int i=0;i<P.length();i++)
    {
        if(P[i]=='?')
        P[i]='B';
    }
    return P;
}
string ReplaceB(string P , int a)
{
    for(int i=a;i<P.length();i+=2)
    {
        if(P[i]=='?')
        P[i]='B';
    }
     for(int i=0;i<P.length();i++)
    {
        if(P[i]=='?')
        P[i]='R';
    }
    return P;
}
int main()
{
    string s;
    cin>>s;
    int indexR=0,indexB=0;
    for(int i= 0 ;i<s.length();i++ )
    {
        if(s[i]=='R')
        {indexR=i;
        break;}
        else if(s[i]=='B')
       { indexB=i;
        break;}
    }
    string P;
    if(indexR!=0)
     P = Replace(s,indexR);
    else
    P = ReplaceB(s,indexB);
  
    cout<<P;
    
    
    
    

    return 0;
}
