

#include<bits/stdc++.h>
using namespace std;


int findMin(int a[],int l,int h)
{
    if(l==h)
        return a[l];
    if(a[l]<a[h])
        return a[l];
    int mid=(l+h)/2;
    if(mid>0 && a[mid]<a[mid-1])
        return a[mid];
    if(mid<h && a[mid+1]<a[mid])
        return a[mid+1];
    if(a[mid]<a[h])
        return findMin(a,mid+1,h);
    return findMin(a,l,mid-1);
}

int main()
{

    int arr[4]={4,1,2,3};
    cout<<findMin(arr,0,3);
}
