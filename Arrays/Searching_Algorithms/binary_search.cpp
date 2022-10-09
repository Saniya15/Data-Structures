#include<iostream>
using namespace std;
int Binary_Search(int arr[],int n,int k)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==k)
        return mid;
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int k=50;
    int ret=Binary_Search(arr,n,k);
    if(ret!=-1)
    cout<<"Key found at"<<ret<<" index"<<endl;
    else 
    cout<<"No key found"<<endl;

}