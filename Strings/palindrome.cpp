#include<bits/stdc++.h>
using namespace std;
bool pal_str(string str)
{
    int l=0;
    int r=str.length()-1;
    while(l<r)
    {
        if(str[l]!=str[r])
        return 0;
        else{
            l++;
            r--;
        }
        
    }
    return 1;
}

int main()
{
    string str;
    cin>>str;
    if(pal_str(str))
    {
        cout<<"palindrome";
    }
    else 
    cout<<"not a palindrome!";
}