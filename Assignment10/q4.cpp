#include<bits/stdc++.h>
using namespace std;
int lenString(string s,int i)
{
    if(s[i]=='\0')
        return 0;
    return 1+lenString(s,i+1);
}

int main()
{

    string s="rajkumar";
    cout<<lenString(s,0);
}
