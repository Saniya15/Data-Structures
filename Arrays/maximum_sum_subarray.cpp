#include<bits/stdc++.h>
using namespace std;
 int max_subarray(int arr[],int n)//brute force
 {
    int max_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++) 
        {
        int cur_sum=0;
        for(int k=i;k<=j;k++)
        {
        cur_sum=cur_sum+arr[k];
        }
        max_sum=max(max_sum,cur_sum);
    }
    }
    return max_sum;
 }
 int prefix_sum(int arr[],int n)/////T.C O(N*N)
 {
    int lar_sum=0;
    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int cur_sum=i>0? prefix[j]-prefix[i-1]:prefix[j];
            lar_sum=max(lar_sum,cur_sum);
        }
    }
    return lar_sum;
 }

 int kadanes_sum(int arr[],int n)
 {
    int cs=0;
    int ms=0;
    for(int i=0;i<n;i++)
    {
        cs=cs+arr[i];
        if(cs<0)
        cs=0;
        ms=max(ms,cs);
    }
    return ms;
 }
 int max(int x,int y)
 {
    if(x>y) return x;
    else return y;
 }
                                                            
                                                            //25,1,56,-13,40,10,-15,20
 int main()
 {
    int arr[]={25,1,56,-13,40,10,-15,20};
    int n=sizeof(arr)/sizeof(int);
    int ans=kadanes_sum(arr,n);
    cout<<"maximum subarray is "<<ans;
 }