#include<bits/stdc++.h>
using namespace std;

 int main()
 {


int a[]= { 1,4,5,6,7};
int n = 5;
int in = 0, val = 5;
for(int i = 0 ; i< 5;i++)
{
    if(a[i]==val)
    in = i ;
}
for(int i = in ; i<n-1;i++)
{
    a[i] = a[i+1];

}
for(int i = 0; i<n-1 ; i++)
{
    cout<<a[i]<<" ";
}
return 0 ;

}