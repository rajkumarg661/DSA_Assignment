#include<bits/stdc++.h>
using namespace std;

int find_index(int a[],int n,int tar)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==tar)
            return mid;
        else if(a[mid]<tar)
            l=mid+1;
        else
            h=mid-1;
    }
    return -1;
}


int main()
{
    int n=6,target=3;
    int arr[n]={2,4,6,9,10,13};
    cout<<find_index(arr,n,target);
}
