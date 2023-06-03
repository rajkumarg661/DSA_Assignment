#include<bits/stdc++.h>
using namespace std;


bool power_two(int n)
{
    if(n<=0)
        return false;
    else if(n==1)
        return true;
    else if(n%2!=0)
        return false;
    else
        return power_two(n/2);



}



int main()
{

    int n=16;
    cout<<power_two(n);

}
