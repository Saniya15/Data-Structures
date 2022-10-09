#include<iostream>
using namespace std;
int Linear_Search(int arr[],int n,int k)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==k)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    int ret=Linear_Search(arr,n,k);
    if(ret!=-1)
    cout<<"Key found at"<<ret<<" index"<<endl;
    else 
    cout<<"No key found"<<endl;

}