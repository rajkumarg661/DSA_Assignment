#include<bits/stdc++.h>
using namespace std;

bool check_mono(int a[],int n)
{
    int x=0,y=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
            x++;
        else
            y++;
    }
    if(x>0 && y>0)
        return false;
    return true;
}


int main()
{
    int n=6;
    int arr[n]={10,9,7,5,3,14};
    if(check_mono(arr,n))
        cout<<"True";             //here output is false because at last it start increasing
    else
        cout<<"False";
}
