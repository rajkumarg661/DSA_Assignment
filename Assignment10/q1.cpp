#include<bits/stdc++.h>
using namespace std;


bool isPowerThree(int n)
{
    if(n<=0)
        return false;
    if(n%3==0)
        return isPowerThree(n/3);
    if(n==1)
        return true;
    return false;
}

int main()
{
    int n=9;
    cout<<isPowerThree(n);
}
