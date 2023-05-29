
#include<bits/stdc++.h>
using namespace std;

int target_index(int a[],int n,int tar)
{
    if(tar>a[n-1])       //check if target is gt that last then directly return n
            return n;
    int l=0,h=n-1;
    while(l<=h)
    {
       int mid=(l+h)/2;
        if(a[mid]==tar)
            return mid;
        else if(a[mid]>tar)
            h=mid-1;
        else
            l=mid+1;
    }
    return h+1;    //not found then return h+1 because at h smaller is present so req index is h+1
}


int main()
{
    int nums[5]={3,5,6,8,10};
    int target=7;
    int index=target_index(nums,5,target);
    cout<<index;

}
