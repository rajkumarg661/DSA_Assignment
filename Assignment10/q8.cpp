#include<bits/stdc++.h>
using namespace std;


int isConstant(char c)
{
    if(c =='a' ||  c =='e' || c =='i' || c =='o' || c=='u' || c=='A' || c=='E'  || c=='I' ||  c=='O' ||  c=='U')
        return 0;
    return 1;

}
int countConstant(string s,int n)
{
    if(n==1)
        return isConstant(s[n-1]);

    return countConstant(s,n-1)  + isConstant(s[n-1]);
}


int main()
{


    string s="geggdd";
    int n=6;
    cout<<countConstant(s,n);

}

