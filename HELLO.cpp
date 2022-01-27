#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here

int lcm=0;
lcm=(den1*den2)/(gcd(den1,den2));
num1*=lcm/den1;
num2*=lcm/den2;
cout<<num1+num2<<"/"<<lcm;

 }
int main()
{

   addFraction(2,3,5,7);
    return 0;
    }