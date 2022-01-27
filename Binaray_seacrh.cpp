#include <bits/stdc++.h>
using namespace std;

///# define ll long long int;
int main()
{
    int a[] = { 10,20,30,30,30,30,30,40,50,60,70,80,90};

    int l  = 0 , h = 12;
    int res = INT_MIN;
    while(l<=h)
    {
        int mid = (l + h) / 2;

        if(a[mid] == 30)
        {res = max(res , mid);
        l = mid +1 ;
        }
        else if(a[mid] > 30 )
        h = mid -1;
        else
        l = mid + 1;

    }
    cout<<res;
    return 0;
}
