#include <bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n)
{
        long long res=0;
        int larr[n],rarr[n];
        larr[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            larr[i]=max(arr[i],larr[i-1]);
        }
        rarr[n-1]=arr[n-1];
        for(int i=n-2;i>0;i--)
        {
            rarr[i]=max(arr[i],rarr[i+1]);
        }
        for(int i=1;i<n-1;i++)
        {
            res=res+(min(larr[i],rarr[i])-arr[i]);
        }
        return res;
}

int main() {
    
    int  height[] = {4,2,0,3,2,5};
    cout<<trappingWater(height,6);
	
	return 0;
}
