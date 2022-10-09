#include<bits/stdc++.h>
using namespace std;
int search(string pat,string txt)
{
    unordered_map<char,int>mp;
    for(int i=0;i<pat.length();i++)
    mp[pat[i]]++;
    int count=mp.size();
    int j=0,i=0;
    int k=pat.length();
    int n=txt.length();
    int anacount=0;
    while(j<n)
    {
        if(mp.find(txt[j])!=mp.end())
        {
            mp[txt[j]]--;
            if(mp[txt[j]]==0)
            count--;
        }
        if(j-i+1<k)
        j++;
        else if(j-i+1==k)
        {
            if(count==0) anacount++;
            if(mp.find(txt[i])!=mp.end())
            {
                mp[txt[i]]++;
                if(mp[txt[i]]==1)
                count++;


            }
            i++;
            j++;
        }
    }
    return anacount;
}
int main()
{
    string pat,txt;
    cin>>txt>>pat;
    int ans=search(pat,txt);
    cout<<ans;
}