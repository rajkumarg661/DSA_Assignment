#include <bits/stdc++.h>
using namespace std;

int main() {
	string S="231*+9-";
	stack<int>st;
	  for(int i=0;i<S.size();i++)
        {
            
            if(S[i]>= '0' && S[i]<='9')
                st.push(S[i]-'0');
            else
            {
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                int ch=S[i];int res;
                if(ch=='+')
                    res=op2+op1;
                else if(ch=='-')
                    res=op2-op1;
                else if(ch=='*')
                    res=op2*op1;
                else
                    res=op2/op1;
                st.push(res);
            }
            
        }
        cout<<st.top();
	return 0;
}
