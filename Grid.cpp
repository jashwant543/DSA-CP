#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   cin>>t;
     while(t--)
     {
       long long  int n , m;
         cin>>n>>m;
         long long int x,y;
         cin>>x>>y;
        // int Rowsum =0;
       long long   int temp1 = (n-1) + (m - 1);
         temp1 = temp1*x;
         int i =0 , j =0;
         if(n==m)
         {i  = n -1;
         j = 0;
         }
         else
         {
             i = min(n,m) - 1;
             j = max(n,m) - min(n,m);
         }
        long long  int temp2 ;
         if (j==0)
         {
              temp2 = y*i;
         }
         else
          temp2 = (i*y) + (j*x);

       // cout<<temp1<<" "<<temp2;
       long long int case3 = (i*y) + ((abs(m-n)/2) * 2) * y + (abs(m-n) % 2) * x; 
       cout<<min({temp1,temp2,case3})<<"\n";
         
     }
     return 0;
}
