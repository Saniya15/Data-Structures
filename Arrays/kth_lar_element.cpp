#include<bits/stdc++.h>
using namespace std;
//using sorting technique
//Tc:O(nlogn)
int kth(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

//using priority queue
//t.c:O(klogk+n-klogk) ,s.c:O(k)
int kth_prio(int arr[],int n,int k)
{
    priority_queue<int>pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(arr[i]<k)
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main()
{
    int arr[]={5,4,2,6,8,1,7,3};
    int n=sizeof(arr)/sizeof(int);
    int lar=kth_prio(arr,n,4);
    cout<<lar;
}