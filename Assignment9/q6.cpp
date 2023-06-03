#include<bits/stdc++.h>
using namespace std;

int nth_term(int a,int d,int n)
{
    if(n==1)
        return a;
    return d+nth_term(a,d,n-1);
}


int main()
{

    int a=2,d=1,n=5;
    cout<<nth_term(a,d,n);
}
