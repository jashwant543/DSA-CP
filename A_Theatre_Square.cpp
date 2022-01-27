    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,m,a;
        cin>>n>>m>>a;
        int A=0,B=0;
        if(m<=a&&n<=a)
        return 1;
        while(n>0)
        {
            if(n==a&&n!=1)
            break;
            else
            {
                A++;
                n=n-a;
            }
            
        }
        while(m>0)
        {
            if(m==a)
            break;
            else
            {
                B++;
                m=m-a;
            }
            
        }
        cout<<A+B;
        return 0;
    }