#include<bits/stdc++.h>
using namespace std;


int find_no(int a[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^a[i];
    }
    return res;
}

int main()
{

    int n=5;
    int arr[n]={1,2,4,4,1};
    cout<<find_no(arr,n);
}
