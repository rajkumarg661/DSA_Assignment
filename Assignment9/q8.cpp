#include<bits/stdc++.h>
using namespace std;


int find_pro(int a[],int n)
{
    if (n==0)
        return 1;
    return a[n-1]*(find_pro(a,n-1));
}

int main()
{
    int n=5;
    int arr[n] = {1, 2, 3,4,5};
    cout<<find_pro(arr,n);
}
