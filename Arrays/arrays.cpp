#include<iostream>
using namespace std;
void printarray(int *arr)
{
    cout<<"in function"<<sizeof(arr)/sizeof(int)<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<"in main"<<sizeof(arr)/sizeof(int)<<endl;
    printarray(arr);
}