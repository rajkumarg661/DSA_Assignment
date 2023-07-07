#include <bits/stdc++.h>
using namespace std;

stack<int> Reverse(stack<int> St)
{
        queue<int>q;
        while(!St.empty())
        {
            q.push(St.top());
            St.pop();
        }
        while(!q.empty())
        {
            St.push(q.front());
            q.pop();
        }
        return St;
        
    }



int main()
{
    stack<int>st;
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(7);
    st.push(6);
    stack<int>res=Reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
