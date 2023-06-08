#include<bits/stdc++.h>
using namesapce std;

 vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        //Your code here
        vector<int>ans;
        int i=0,j=0;
        while(i<N && j<M)
        {
            if(i>0 && arr1[i]==arr1[i-1]){
                i++;continue;}
            if(arr1[i]>arr2[j])
                j++;
            else if(arr1[i]<arr2[j])
                i++;
            else
            {
                ans.push_back(arr1[i]);
                i++;j++;
            }
        }
        return ans;
    }

int main()
{
    int n=6,m=4;
    int a1[n]={1,4,7,8,9,12};
    int a2[m]={1,4,7,9};
    vector<int>res=printIntersection(a1,a2,n,m);
    for (auto it:res)
        cout<<it<<" ";
      return 0;
}
