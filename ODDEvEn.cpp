#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
  int o=0,e=0 , c=0;
  for(int i = 0 ;i<n ;i++)
  {
    if(a[i]%2==0)
    e++;
    else
    {
      o++;
    }
    
  }
  if(e==0||a==0)
  return false;

  for(int i =0 ;i<n;i++)
  {
    if(a[i]%2==0)
    {
      swap(a[i],a[c]);
      c++;
    }
  }
  for(int i =0 ;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return true;
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
        int a[n];
        int Even=0;
        
        for( int i = 0 ;i<n;i++)
       cin>>a[i];
     bool A =   check(a,n);
        
     if(!A)
     cout<<-1<<"\n";
     else
     {
       cout<<"\n";
     }
     t--;
     }
     return 0;  


        
    }