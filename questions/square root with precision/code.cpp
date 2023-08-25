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

double sqrt(int n, int pre){
    int base = sqrt_BS(n);
    double factor = 1;
    double ans = base;
    for(int i=0; i < pre; i++){
        factor = factor/10;
        for(double j = ans; j*j < n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int precision;
    cout<<endl<<"Enter the precison : ";
    cin>>precision;
    cout<<endl;

    cout<<"Squre root of "<<n<<" is "<<sqrt(n, precision);

}