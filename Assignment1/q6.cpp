#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    int a[n]={1,2,2,4};
    unordered_set<int>ust;
    for(int i=0;i<n;i++)
    {
        ust.insert(a[i]);
    }
    if(n==ust.size())
        cout<<"False";
    else
        cout<<"True";
    return 0;

}
