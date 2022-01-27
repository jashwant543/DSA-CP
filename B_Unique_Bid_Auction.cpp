#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n)
{
    int u=0;
     int MIN = INT_MAX;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

  
    for (int i = 0; i < n; i++)
        if (mp[arr[i]] == 1)
            {u=min(i,MIN);
              MIN=u;

            }

if(u==0)
    return -1;

    return u+1;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout << firstNonRepeating(arr, n)<<"\n";
    }
    return 0;
}
