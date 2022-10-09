#include<bits/stdc++.h>
using namespace std;
int maximum(int x,int y)
{
    if(x>y) return x;
    else return y;
}
int maximumsumsubarray(vector<int>arr,int n,int k)
{
    int i=0,j=0,sum=0;
    int maxi=INT_MIN;
    while(i<n-k+1)
    {
        sum=sum+arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            maxi=maximum(maxi,sum);
            sum=sum-arr[i];
            i++;j++;
        }
    }
    return maxi;
}
int main()
{
    vector<int>v{1,4,3,6,5,1,2};
    int ans=maximumsumsubarray(v,v.size()-1,3);
    cout<<ans;

}