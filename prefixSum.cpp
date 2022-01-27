#include<bits/stdc++.h>
using namespace std;

 bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
bool check(int a[] ,int b[] , int size)
{
    int sum1 = 0 ,sum2 =0;
    for(int i =0;i<size;i++)
    {
        sum1 +=a[i];
        a[i] =sum1;
        sum2 +=b[i];
        b[i] = sum2;

        if(a[i] == b[i])
        return false; 

    }
    return true;
}
void PreSum(int size)
{
   int a[size] , b[size];
   int i  = 1 , j=0;
   a[0] = 2;
   while(i<size)
   {
       if(j == 4)
       {a[i] = a[i-1] + 2;
       j = 1;
       }
       else
          { a[i] = a[i-1] + j;
          j++;

          }
     }
     b[0] = 1 ;
     j =3;

     
    while(i<size)
   {
       if(j == 0)
       {b[i] = b[i-1] + 2;
       j = 3;
       }
       else
          { b[i] = b[i-1] + j;
          j--;

          }
     }
     if(check(a,b,size))
     {
         cout<<"YES"<<"\n";
     for(int i =0 ;i<size;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<"\n";
     for(int i =0 ;i<size;i++)
     {
         cout<<b[i]<<" ";
     }
     }
     else
     {
         cout<<"NO"<<"\n";
     }
     

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int size = n/2;
      // 
       if(isPowerOfTwo(n) == false)
       cout<<"NO"<<"\n";
       else
       {
           //cout<<"YES"<<"\n";
           PreSum(size);
       }
   }
   return 0;
}
       
       
     