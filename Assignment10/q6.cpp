#include<bits/stdc++.h>
using namespace std;

int towerHanoi(int n,int from,int endd,int aux)
{

    if(n==0)
        return 0;
    int steps=towerHanoi(n-1,from,aux,endd);
    cout<<"Move disk "<<n<<" from rod "<<from<<" to rod "<<endd<<endl;
    steps+=towerHanoi(n-1,aux,endd,from);
    return steps+1;
}

int main()
{
    int n=2;
    towerHanoi(n,1,3,2);


}
