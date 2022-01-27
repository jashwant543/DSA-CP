#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
int a[MAX_SIZE];
int top=-1;
void push(int x)
{++top;
    a[top]=x;
    //top++;

}
void pop()
{
    top--;
}
void print()
{
    for(int i=0;i<top;i++)
    cout<<a[i]<<" ";
}
int main()
{
    push(5);
    push(72);
     push(75);
      push(7);
       push(73);

        push(5);
        pop();
        print();
        return 0;

}