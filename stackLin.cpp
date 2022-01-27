#include<bits/stdc++.h>
using namespace std;
int main()
struct node
{
    int data;
    node* next;
};
node* top;
void push(int d)
{
node* temp=new node();
temp->data=d;
temp->next=top;
top=temp;

}
void pop()
{
node* temp;
temp=top;
top=top->next;
free(temp);
}
void print()
{
    node* a=top;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){

    top=NULL;
push(4);
push(4);push(4);push(4);
return 0;

}