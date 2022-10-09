// C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

//Intially reverse individual words/string one by one string=i write code
//after reversing string=i etirw edoc
//then reverse whole string from start to end
//string=write code i
void reverseWords(string s)
{
	
	// temporary vector to store all words
	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		
		// Check if we encounter space
		// push word(str) to vector
		// and make str NULL
		if (s[i] == ' ')
		{
			tmp.push_back(str);
			str = "";
		}

		// Else add character to
		// str to form current word
		else
			str += s[i];
	}

	// Last word remaining,add it to vector
	tmp.push_back(str);

	// Now print from last to first in vector
	int i;
	for (i = tmp.size() - 1; i >=0; i--)
		cout << tmp[i] << " ";
	
}
//T.C:O(N) S.C:O(N)
//below approach without using extra space
string reverseWord(string s) 
    {
        string tmp="", ans="";
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(ch==' ')
            {
                if(tmp!="")
                    ans = tmp + " " + ans;
                tmp = "";        
            }
            else 
                tmp += ch;
        }
        
        if(tmp!="")
            ans = tmp + " " + ans;
        ans.pop_back();
        
        return ans;      
    }

// Driver Code
int main()
{
	string s = "i like this program very much";
	reverseWords(s);
    string str=reverseWord(s);
    for(int i=0;i<str.length();i++)
    cout<<str[i];
	return 0;
}
