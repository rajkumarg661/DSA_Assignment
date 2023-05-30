#include<bits/stdc++.h>
using namespace std;

bool check_status(int a[],int arr_len,int n_newflower)
{
    int space=0;
    for(int i=1;i<arr_len-1;i++)
    {
        if(a[i]==0 && a[i-1]==0 && a[i+1]==0){
                a[i]=1;
            space++;}
    }
    if(space>=n_newflower)
        return true;
    return false;
}


int main()
{
    int size_arr=8,n_newflower=4;
    int arr[size_arr]={1,0,0,0,0,0,1,0};
                                              //here we have to plant 2 which is possible therefore output is true
    if(check_status(arr,size_arr,n_newflower)==true)
        cout<<"True";
    else
        cout<<"False";
}
