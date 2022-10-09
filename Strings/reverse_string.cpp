#include<bits/stdc++.h>
using namespace std;
void reverse_(string &str)
{
    int l=0;
    int r=str.length()-1;
    while(l<r)
    swap(str[l++],str[r--]);
    
}

int main()
{
    string str;
    cin>>str;
    reverse_(str);
    
    cout<<str;
}