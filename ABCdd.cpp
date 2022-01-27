#include<bits/stdc++.h>
using namespace std;
int main()

{
   
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;
   cin>>n;
  
  int temp = 1;
  string s ="A";
  while(temp<=n)
  {
    if(2*temp<=n)
    {
      temp *=2;
      s = s+"B";
    }
    else if(temp+1<=n)
    {
    temp +=1;
      s= s + "A";
    }
    if(temp == n)
    {cout<<s;
    return 0;}
  }
}
  
  
  
  
  