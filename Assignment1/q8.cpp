#include<bits/stdc++.h>
using namespace std;

vector<int> find_value(int arr[], int n)
{
    vector<int>res;
    int temp[n] = {};

    for (int i = 0; i < n; i++)
    {
        temp[arr[i]-1]++;
        if (temp[arr[i] - 1]>1)
        {
            res.push_back(arr[i]);
              break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if (temp[i]==0)
        {
            res.push_back(i+1);
            break;
        }
    }
    return res;

}

int main()
{

    int arr[] = {2,3,4,5,3};
    int n = 5;
    vector<int>ans=find_value(arr, n);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
