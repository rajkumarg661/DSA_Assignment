#include<bits/stdc++.h>
using namespace std;


int findMissing(int a[],int n)
{
    int arr_sum=0,total_sum=n*(n+1)/2;
    for(int i=0;i<n;i++)
        arr_sum+=a[i];
    return (total_sum-arr_sum);
}

int main()
{

    int arr[5]={1,2,4,5,0};
    cout<<findMissing(arr,5);
}
