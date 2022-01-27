#include<bits/stdc++.h>
using namespace std;

void swap(int *a ,int *b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}
void horeePartition2(int a[] , int l , int h)
{
    
    int i = l-1 , j = h + 1;
    int p = a[l];
    while(1)
    {
    do{
        i++;
    }while(a[i]==1);

    do{
        j--;
    }while(a[j]==2);

    if(i>=j)
    break;
    //return i;

    swap(&a[i],&a[j]);
    }
}
int horeePartition(int a[],int l ,int h)
{
    int i = l-1 , j = h + 1;
    int p = a[l];
    while(1)
    {
    do{
        i++;
    }while(a[i]==0);

    do{
        j--;
    }while(a[j]!=0);

    if(i>=j)
    return j;

    swap(&a[i],&a[j]);
    }
    // for(int i=0;i<8;i++)
    // {
    //     cout<<a[i]<<" ";
    // }

}
int main()
{
   int arr[8];
   for(int i=0;i<8;i++)
   {
       cin>>arr[i];
   }
   int temp = horeePartition(arr,0,7);
 //  cout<<temp<<"\n";
  horeePartition2(arr,temp+1,7);

   for(int i =0;i<8;i++)
   cout<<arr[i]<<" ";
   return 0;

}