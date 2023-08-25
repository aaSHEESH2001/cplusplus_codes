#include<iostream>
using namespace std;

int sqrt_BS(int n){
    int start = 0;
    int end = n;
    int ans;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(mid*mid == n){
            return mid;
        }
        if(mid*mid < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){

    int num;
    cin>> num;

    cout<<"The square root of "<<num<<" is "<<sqrt_BS(num);

}