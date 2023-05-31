#include<bits/stdc++.h>
using namespace std;

vector<int> increment_array(vector<int>a,int n)
{
    vector<int>tmp(a);
    for(int i=n-1;i>0;i--)
    {
        if(tmp[i]==9)
            tmp[i]=0;
        else{
            tmp[i]++;
            return tmp;}
    }
    tmp[0]=1;
    tmp.push_back(0);
    return tmp;
}


int main()
{
    vector<int>nums={9,9,7,9,9};
    vector<int>res=increment_array(nums,5);
    for(int i:res)
        cout<<i<<" ";

}
