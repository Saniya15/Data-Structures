#include<bits/stdc++.h>
using namespace std;
int max(int x,int y)
{
    if(x>y) return x;
    else return y;
}
int longestsubarray(vector<int>arr,int sum)
{
    int i=0,j=0;
    int cur_sum=0;
    int mx=INT_MIN;
    while(j<arr.size())
    {
        cur_sum=cur_sum+arr[j];
        if(cur_sum<sum)
        j++;
        else if(cur_sum==sum)
        {
            mx=max(mx,j-i+1);
            j++;
        }
        else if(cur_sum>sum)
        {
            while(cur_sum>sum)
            {
                cur_sum=cur_sum-arr[i];
                i++;
                if(cur_sum==sum)
                mx=max(mx,j-i+1);
            }
            j++;
        }

    }
    return mx;
}
int main()
{
    vector<int>v{4,1,1,1,2,3,5};
    int ans=longestsubarray(v,5);
    cout<<ans;
}
