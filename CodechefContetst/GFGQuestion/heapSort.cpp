#include<bits/stdc++.h>
using namespace std;

// void swap(int *a ,int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b =temp;
// }
void heapify(int a[],int n,int i)
{
    int largest = i;
    int l = 2*i;
    int r = 2*i + 1;
    if(l<=n&&a[l] >a[largest])
    largest = l;
     if(r<=n&&a[r] >a[largest])
     largest =r;

     if(largest !=i)
     {
         swap(a[i],a[largest]);
         heapify(a,n,largest);
     }
}
void buildHeap(int a[] , int n)
{
    for(int i = n/2-1;i>=0;i--)
    heapify(a,n,i);
}
void heapSort(int a[] ,int n)
{
    buildHeap(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a[i],a[0]);
        heapify(a,i,0);
    }
}
int main()
{
    int a[] = {40,10,30,50,60,15};
    int n = 6;
    
    heapSort(a,n);
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
   
   return 0;
}