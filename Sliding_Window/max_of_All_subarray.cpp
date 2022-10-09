#include<bits/stdc++.h>
using namespace std;
vector<int>maxslidingwindow(vector<int>nums,int k)
{
    list<int>l;
    vector<int>v;
    int i=0,j=0;
    while(j<nums.size())
    {
        if(l.empty())
        l.push_back(nums[j]);
        else
        {
            while(l.size()>0 and l.back()<nums[j])
            l.pop_back();
            l.push_back(nums[j]);
        }
        if(j-i+1<k)
        j++;
        else if(j-i+1==k)
        {
            v.push_back(l.front());
            if(l.front()==nums[i])
            l.pop_front();
            i++;
            j++;
        }
    }
    return v;

}
int main()
{
    vector<int>v{1,3,-1,5,3,6,7};
    vector<int >ans=maxslidingwindow(v,3);
    for(auto it:ans)
    cout<<it<<" ";

}