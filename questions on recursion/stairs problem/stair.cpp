#include<iostream>
using namespace std;

int getDistinctways(int nStairs){
    if(nStairs < 0)
        return 0;
    if(nStairs == 0)
        return 1;
    int ans = getDistinctways(nStairs-1) + getDistinctways(nStairs-2);
    return ans;
}

int main(){
    int n;
    cin>>n;

    int ans = getDistinctways(n);
    cout<<"Number of ways to climb n stairs : "<<ans;

    return 0;
}