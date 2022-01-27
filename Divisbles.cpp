#include<bits/stdc++.h>
using namespace std;
string Dividethree(int n)
{
    if(n==1)
    return "3";
    if(n==2)
    return "15";
      
      string s; 
      s.resize(n);
      s[n-1]='5';
      s[0]='1';
     int i =1;
      for(i = 1; i<s.length()-1; i++)
      {
          s[i] = '0';
      }
      return s;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   cin>>t;
     while(t>0)
    {
        int n;
        cin>>n;
       cout<<Dividethree(n)<<"\n";
        t--;
    }
    return 0;
}
        