#include<bits/stdc++.h>
using namespace std;

void printPermute(string str,int i,int j)
{
    if(i==j)
    {
        cout<<str<<" ";
        return;
    }
    for(int x=i;i<j;i++)
    {
        swap(str[i],str[x]);
        printPermute(str,x+1,j);
        swap(str[i],str[x]);

    }
}

int main()
{
    string str="abc";
    printPermute(str,0,3);

}
