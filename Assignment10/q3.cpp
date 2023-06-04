#include<bits/stdc++.h>
using namespace std;

void printSubset(string s,int i,int j,string ans="")
{

    if(i==j){
        cout<<ans<<endl;
        return ;}
    printSubset(s,i+1,j,ans);
    printSubset(s,i+1,j,ans+=s[i]);
}



int main()
{

    string s="abc",ans="";
    printSubset(s,0,3,ans);
}
