#include<bits/stdc++.h>
using namespace std;
////T.C :O(N)
void sort_arr(int arr[],int n)
{
    int l=0,m=0,h=n-1;
    while(m<=h)
    {
        if(arr[m]==0)
        {
            swap(arr[m],arr[l]);
            l++;
            m++;
        }
        else if(arr[m]==1)
        {
            m++;
        }
        else if(arr[m]==2)
        {
            swap(arr[m],arr[h]);
            h--;
            m--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={0,1,2,1,0,2,2,0,1,2,0,1};
    int n=sizeof(arr)/sizeof(int);
    sort_arr(arr,n);

}