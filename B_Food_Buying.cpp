#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t>0)
    {
        /* code */

        int s;
        cin>>s;
        int sum=0;
        while(s>10)
        {
            sum+=s-s%10;
            s=s%10+(s-s%10)/10;
        }
        sum+=s+s/10;
        cout<<sum<<"\n";
        t--;

    }
    return 0;
}
    