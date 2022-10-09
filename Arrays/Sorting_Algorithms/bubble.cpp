#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
 int main()
 {
    int arr[]={-2,2,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
 }