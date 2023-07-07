#include <bits/stdc++.h>
using namespace std;


class CreateStack
{
    stack<int>s;
    int minEle;
public :
    int getMin()
    {
        if(s.size()==0)
                return -1;
           return minEle;
    }
    int pop()
    {
         if(s.empty())
                return -1;
           int t=s.top();
           s.pop();
           if(t<=minEle)
           {
               int res=minEle;
               minEle=2*minEle-t;
               return res;
           }
           else {
            return t;}
    }
    void push(int x)
    {
        if(s.empty())
           {
               s.push(x);
               minEle=x;
           }
           else if(x<=minEle)
           {
               s.push(2*x-minEle);
               minEle=x;
           }
           else
           {
            s.push(x);
           }
    }
    
    int top()
       {
           int t=s.top();
           return ((t<=minEle)?minEle:t);
       }
    
};

int main()
{
    CreateStack s;
    s.push(2);
    s.push(4);
    s.push(-9);
    cout<<s.getMin();
}



