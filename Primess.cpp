#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

 void sieve(int n)
{
	if(n <= 1)
		return;

	bool isPrime[1000];

	fill(isPrime, isPrime + n + 1, true);

	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}
long long int T[n]={0};
	for(int i = 2; i<=n; i++)
	{
		if(isPrime[i])
			T[isPrime[i]]++;
	}
	
	for(int i=0;i<n;i++) 
{	if(T[isPrime[i]+n]==1)         //using simple property c=a-b then b+c=a 
	{ 
	//cout<<"Yes\n"; 
	cout<<i<<" "<<i+n<<endl;
	break;
	}
}

}
int main() {
    
    	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   cin>>t;
   while(t--)
   {
    	long long int n;
        cin>>n;

		sieve(n);
        cout<<"\n";
   }
   return 0;
}