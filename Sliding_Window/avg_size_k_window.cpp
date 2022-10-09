#include<bits/stdc++.h>
using namespace std;
vector<float> averagesubarray(vector<int>arr,int n,int k)
{
    int i=0,j=0,sum=0;
    vector<float>avg;
    while(i<n-k+1)
    {
        sum=sum+arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            float average=sum/k;
            avg.push_back(average);
            sum=sum-arr[i];
            i++;j++;
        }
    }
    return avg;
}
int main()
{
    vector<int>v{1,4,3,6,5,1,2};
    vector<float>ans=averagesubarray(v,v.size()-1,3);
    for(auto it:ans)
    cout<<it<<endl;

}