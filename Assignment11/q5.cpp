#include<bits/stdc++.h>
using namespace std;


int intersection(int a1[],int n,int a2[],int m)
{
   unordered_set<int>ust1,ust2;
   for(int i=0;i<n;i++)
        ust1.insert(a1[i]);
   for(int i=0;i<m;i++)
       ust2.insert(a2[i]);
   for(auto it=ust1.begin();it!=ust1.end();it++)
       if(ust2.find(*it)!=ust2.end())
            cout<<*it<<" ";
}

int main()
{
    int n=4,m=2;
    int a1[n]={1,2,2,1},a2[m]={1,1};
    cout<<intersection(a1,n,a2,m);
}
