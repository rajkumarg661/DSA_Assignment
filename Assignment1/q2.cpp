#include<bits/stdc++.h>
using namespace std;

int modify_array(int a[],int n,int val)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=val)
        {
            swap(a[i],a[k]);
            k++;
        }
    }
    return k;
}


int main()
{
    int n=4;
    int nums[n]={3,4,2,3};
    int value=4;
    int ans=modify_array(nums,n,value);
    cout<<ans;

}
