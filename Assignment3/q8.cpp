#include<bits/stdc++.h>
using namespace std;


bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

bool check_meeting(vector<pair<int,int>>v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1].first<v[i].second)
            return false;
    }
    return true;
}


int main()
{
    vector< pair <int, int> > vect;
    int n=3;
    int s[] = {0,5,15};
    int e[] = {30,10,20};
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(s[i],e[i]) );

    if(check_meeting(vect))
        cout<<"True";
    else
        cout<<"False";
}
