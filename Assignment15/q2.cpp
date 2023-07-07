#include <bits/stdc++.h>
using namespace std;


vector<long long> nextLargerElement(vector<long long> arr, int n)
{
        
        
    stack<long long>st;
    vector<long long>ans;
    st.push(arr[0]);
    ans.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && st.top()>=arr[i])
            st.pop();
        long long ele=st.empty()?-1:st.top();
        ans.push_back(ele);
        st.push(arr[i]);
    }
    return ans;
}


int main() {
	int n=6;
	vector<long long>a{1,5,0,3,4,5};
	vector<long long> ans=nextLargerElement(a,n);
	for(auto e:ans)
	    cout<<e<<" ";
}
