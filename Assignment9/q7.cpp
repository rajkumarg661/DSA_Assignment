#include<bits/stdc++.h>
using namespace std;


void permutation(string S,int i,int j)
	{
	    if(i==j)
	        cout<<S<<" ";
	   else
	   {
	       for(int x=i;i<=j;i++)
	       {
	          swap(S[i],S[x]);
	          permutation(S,x+1,j);
	          swap(S[i],S[x]);
	       }
	   }

	}

vector<string>find_permutation(string S)
{
    permutation(S,0,S.size()-1);
}


int main()
{
    string s="abc";
    find_permutation(s);
    return 0;
}
