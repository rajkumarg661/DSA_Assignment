#include<bits/stdc++.h>
using namespace std;

int findpow(int n,int p)
{
    if(p==0)
        return 1;
    if(p==1)
        return n;
    return n*findpow(n,p-1);
}


int main()
{
    int n=2,p=5;
    cout<<findpow(n,p);

}
