    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,x,y;
        cin>>n>>x>>y;
        float p;
        p=(y*n)/100;
        int temp=(int)p;

        cout<<temp<<" "<<p;
        cout<<endl;
        if(temp==p)
        cout<<p-x;
        else
    { temp=temp+1;
        cout<<temp-x;
    }
    return 0;
    }

