#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int n;
        vector<long long int> v;
        long long int sum =0;
        int temp1 , temp2;
        for(int i = 0 ;i<n;i++)
        {
            int temp;
            cin>>temp;
            sum = sum + temp;
            v.push_back(temp);
        }
        long long int getNum = powerOfTwo(sum);
        for(int i = 0 ;i<v.size();i++)
        {
            int temp  = (getNum - sum) + v[i] ;
            if(temp % v[i] == 0)
            {
                temp1 = temp / v[i];
                v[i] = temp ;
                break;
            }

        }
        

    }
}