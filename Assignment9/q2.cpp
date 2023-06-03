#include<bits/stdc++.h>
using namespace std;



int sumOfn(int n)
{
    if(n==0 || n==1)
        return n;
    return n+sumOfn(n-1);

}

int main()
{

    int n=5;
    cout<<sumOfn(n);


}
