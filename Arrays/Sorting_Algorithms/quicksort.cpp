#include<bits/stdc++.h>
using namespace std;
//All elements lesser than the pivot should be towards the left and 
//all the eleents greater than the left should be towards the right
int partition(int *A, int start, int end)
{
    //select a pivot elemnt here Im taking last element of array
    int pivot=A[end];
    int pIndex=start;
    for(int i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[end]);
    return pIndex;
}
void Quicksort(int *A, int start, int end)
{
    if(start<end){
        int parIndex=partition(A, start, end);
        Quicksort(A,start, parIndex-1);
        Quicksort(A,parIndex+1,end);
    }

}
int main()
{
    int A[]={5,2,1,8,7,4};
    int n=6;
    Quicksort(A,0,5);
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
}