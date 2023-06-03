#include<bits/stdc++.h>
using namespace std;

int find_max(int a[],int n)
{
    if(n==1)
        return a[0];
    return max(a[n-1],find_max(a,n-1));
}


int main()
{
    int n=7;
    int arr[]={1, 4, 3, -5, -4, 8, 6};
    cout<<find_max(arr,n);


}

