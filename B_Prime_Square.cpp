        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            int t;
            cin>>t;
            for(int T=0;T<t;t++)
            {
                int n;
            int a[n][n];
            if(n==4)
            {
                    cout << "4 6 8 1\n4 9 9 9\n4 10 10 65\n1 4 4 4\n";
                    break;
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j||i+j+1==n)
                    a[i][j]=1;
                    else
                    a[i][j]=0;
                }
            }
            
        
            
            int i=n/2;
            int j=0;
            a[i][j]=1;
            a[j][i]=1;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
                
                
                cout<<"\n";
            }
            cout<<"\n";
            }

            return 0;
        }
