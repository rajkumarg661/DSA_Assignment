
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int a[n]={1,0,2,0,8,7};
    int idx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0){
            swap(a[i],a[idx]);
            idx++;}
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;

}
