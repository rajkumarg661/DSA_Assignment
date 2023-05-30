#include<bits/stdc++.h>
using namespace std;

int max_pro(int a[],int n)
{
        sort(a,a+n);
        int min1=a[0];
        int min2=a[1];
        int max1=a[n-1];
        int max2=a[n-2];
        int max3=a[n-3];

        int ans1=max1*(max2*max3);
        int ans2=min1*(min2*max1);
        return max(ans1,ans2);

}


int main()
{
   int n=8;
  int arr[n]={4,2,1,3,-4,-8,7,6};
    cout<<max_pro(arr,n);
}
