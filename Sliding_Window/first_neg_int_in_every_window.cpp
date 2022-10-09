#include<bits/stdc++.h>
using namespace std;
vector<int> firstnegativeinteger(vector<int>v,int n,int k)
{
    int i=0,j=0;
    list<int>l;
    vector<int>ans;
    while(j<n)
    {
        if(v[j]<0)
        l.push_back(v[j]);
        if(j-i+1<k)
        j++;
        else if(j-i+1==k)
        {
            if(l.size()==0)
            ans.push_back(0);
            else
            {
                ans.push_back(l.front());
                if(l.front()==v[i])
                {
                    l.pop_front();
                }
                i++;
                j++;
                
            }
            //j++;
        }
    }
    return ans;
}
int main()
{
    vector<int>v{12,-1,-7,8,-15,30,16,28};
    vector<int>res=firstnegativeinteger(v,7,3);
    for(auto it: res)
    cout<<it<<" ";
}