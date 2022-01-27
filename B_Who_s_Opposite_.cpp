#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; 
    cin>>t;
    for(int j = 0 ;j < t ;j++)
    {
        int a , b , c ;
        cin>>a>>b>>c;

        if(abs(a-b)==1)
        {cout<<-1<<"\n";
        continue;
        }

        int d = abs(a-b);
        //if()
       if( d == c)
       {cout<<c+d<<"\n";
       continue;
       }
    }
    return 0;
}
       
        