#include <bits/stdc++.h>
using namespace std;


vector<long long> nextLargerElement(vector<long long> arr, int n)
{
        
        
    stack<long long>st;
    vector<long long>ans;
    st.push(arr[n-1]);
    ans.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i])
            st.pop();
        long long ele=st.empty()?-1:st.top();
        ans.push_back(ele);
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main() {
	int n=5;
	vector<long long>a{6,8,0,1,3};
	vector<long long> ans=nextLargerElement(a,n);
	for(auto e:ans)
	    cout<<e<<" ";
}
