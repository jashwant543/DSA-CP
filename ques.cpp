#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
int a[MAX_SIZE];
int r=-1;
int f=-1;
void insert(int data)
{
    if(f==-1&&r==-1)
    {f=0;
    r=0;
    }
    else
    {
        r=r+1;
    }
    a[r]=data;
  
}
void print()
{
    for(int i=0;i<=r;i++)
cout<<a[i]<<" ";
}
int main()
{
    insert(5);
    insert(52);
    insert(4);
    insert(53);
    print();
    return 0;
}