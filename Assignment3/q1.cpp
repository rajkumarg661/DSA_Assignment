#include <bits/stdc++.h>
using namespace std;

int closet_sum(int arr[],int n, int x)
{
    sort(arr,arr+n);
    int closestSum = INT_MAX;
    for (int i = 0; i < n - 2; i++)
    {

        int p1=i+1,p2=n-1;
        while (p1 < p2)
        {
            int sum = arr[i] + arr[p1] + arr[p2];
            if (sum == x)
                return sum;
            if (abs(x - sum) < abs(x - closestSum))
                closestSum = sum;

            if (sum > x)
                p2--;
            else
                p1++;
        }
    }

    return closestSum;
}

int main()
{
    int n=4;
    int arr[] = {-1,2,1,-4};
    int x = 1;
    cout<<closet_sum(arr,n, x);

    return 0;
}
