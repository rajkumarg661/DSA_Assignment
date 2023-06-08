
#include<bits/stdc++.h>
using namespace std;


int findMissing(int a[],int n)
{
    int arr_sum=0,total_sum=n*(n+1)/2;
    for(int i=0;i<n;i++)
        arr_sum+=a[i];
    return (n-(total_sum-arr_sum));
}

int main()
{

    int arr[10]={3,1,3,4,2,5,6,7,8,9};
    cout<<findMissing(arr,10);
}
