#include <bits/stdc++.h>
using namespace std;

int main() {
	string s="rajkumar";
	stack<char>st;
	string ans="";
	for(int i=0;i<s.size();i++)
	{
	    st.push(s[i]);
	}
	while(!st.empty())
	{
	    ans+=st.top();
	    st.pop();
	}
	cout<<ans;
	return 0;
}
