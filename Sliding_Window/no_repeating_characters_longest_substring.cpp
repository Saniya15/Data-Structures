#include<bits/stdc++.h>
using namespace std;
int max(int x,int y)
{
    if(x>y)return x;
    else return y;
}
int lengthoflongestsubstring(string s)
{
    unordered_map<char,int>mp;
    int i=0,j=0;
    int ans=0;
    int mx=INT_MIN;
    while(j<s.size())
    {
        mp[s[j]]++;
        if(mp.size()==j-i+1)
        {
            mx=max(mx,j-i+1);
            j++;
        }
        else if(mp.size()<j-i+1)
        {
            while(mp.size()<j-i+1)
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                mp.erase(s[i]);
                i++;
            }
            j++;
        }

    }
    return mx;
}
int main()
{
    string str;
    cin>>str;
    int ans=lengthoflongestsubstring(str);
    cout<<ans;
}