#include<bits/stdc++.h>
using namespace std;

long long floorSqrt(long long x)
{
        long long l=0,h=x,ans=0;
        while(l<=h)
        {
            long long mid=(l+h)/2;
            long long msq=(mid*mid);
            if(msq==x)
                return mid;
            else if(msq<x)
            {
                ans=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return ans;

}

int main()
{
    long long n=4;
    cout<<floorSqrt(n);
    return 0;
}
