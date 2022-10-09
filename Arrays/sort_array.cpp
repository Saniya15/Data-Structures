#include<iostream>
using namespace std;
int Reverse_arr(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;

    }
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Reverse_arr(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}