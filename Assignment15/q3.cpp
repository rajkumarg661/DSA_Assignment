#include <bits/stdc++.h>
using namespace std;

class Qstack
{
    public:
    queue<int>q1;
    queue<int>q2;
    void push(int x)
    {
        q1.push(x);
    }
    int pop()
    {
        if(q1.empty()==true) return -1;
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ele=q1.front();
        q1.pop();
        while(q2.empty()==false)
        {
            q1.push(q2.front());
            q2.pop();
        }
        return ele;
    }
};

int main() {
	Qstack  qs;
	qs.push(2);
	qs.push(3);
	cout<<qs.pop();
	return 0;
}
