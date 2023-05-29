/*
take one map of size n-1
traverse through array and check if (target-current element) exist if exist then return index of current element and corrsponding value of map
else
push curr elemnt with its index into map
*/

#include<bits/stdc++.h>
using namespace std;

vector<int>target_index(int a[],int n,int target)
{
    map<int,int>mp;vector<int>ans;
    mp[a[0]]=0;
    for(int i=1;i<n;i++)
    {
        int tmp=target-a[i];
        auto it=mp.find(tmp);
        if(it!=mp.end())
        {
            ans.push_back(i);
            ans.push_back(it->second);
        }
        else
            mp[a[i]]=i;
    }
    return ans;
}
int main()
{
    int nums[4]={2,7,11,15};
    int target=9;
    vector<int>res=target_index(nums,4,target);
    cout<<res[0]<<" "<<res[1];

}


