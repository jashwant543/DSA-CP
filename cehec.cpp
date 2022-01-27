

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


 bool check(long long N)
  {
    //  bool c=false;
      string s=std::to_string(N);
      cout<<s;
        for(int i=0;i<s.size();i++)
        {
            int j=i+1;
            if(j>=s.size())
            break;
            if((s[i]-'0')-(s[j]-'0')!=1||(s[i]-'0')-(s[j]-'0'!=-1))
            return false;
           
            }
            cout<<"yes";
        return true;
  }
    int main()
    {
        // code here
        int X=69;
        
        if( X<=10)
        {
            return X;
        }
        while(X>0)
        {
        if(check(X))
        {break;
        return X;
        }
        else
        {
            X=X-1;
            check(X);
        }
        }
        

        return 0;
    }

    