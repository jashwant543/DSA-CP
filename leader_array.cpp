#include<bits/stdc++.h>
using namespace std;
void leader(int a[],int n)
{
  int c[n],j=0,p;
  p=a[n-1];
  c[j]=p;
   cout<<c<<" ";
  for(int i=n-2;i>=0;i--)
  {
      if(p<a[i])
      {p=a[i];
          c[j+1]=p;
      j++;}
  }
  for(int i=j-1;i>=0;i++)
  cout<<c[i]<<" ";

}
int main()
{
    int a[7],q=0;
    for(int i=0;i<7;i++)
    cin>>a[i];
  leader(a,7);
    return 0;
}