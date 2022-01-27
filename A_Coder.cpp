#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
string a[n][n];
 for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        if((i+j)%2==0)
        a[i][j]='C';
        else
        {
            a[i][j]='.';
        }
        
    }
    cout<<n<<"\n";
     for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
       cout<<a[i][j];


       cout<<"\n";
    }
    return 0;
}