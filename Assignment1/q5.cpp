#include<bits/stdc++.h>
using namespace std;

void merge_array(vector<int>&nums1,int m,vector<int>&nums2,int n)
{
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while (j>=0)
        {
            if (i>=0&&nums1[i]>nums2[j])
                nums1[k--]=nums1[i--];
            else
                nums1[k--]=nums2[j--];
        }
}
int main()
{
    int m=4,n=3;
    vector<int>n1{1,2,3,5,0,0,0};
    vector<int>n2{6,8,10};
    merge_array(n1,m,n2,n);
    for(auto it:n1)
        cout<<it<<" ";
    return 0;

}
