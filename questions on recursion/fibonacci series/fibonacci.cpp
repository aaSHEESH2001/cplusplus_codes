#include<iostream>
using namespace std;

/*

//To print fibonacci series
void fibonacci_series(int n,int a=0, int b=1){
    
    if(n == 1){
        return ;
    }
    cout<<" "<<b<<" ";
    fibonacci_series(n-1, b, a+b);
}

//To return the nth element of the fibonacci
//But this code will throw an error for the big value of n because the integer data type cannot store large values
int fibonacci_number(int n, int a=0, int b= 1){
        if(n == 1){
        return a;
    }
    int ans = fibonacci_number(n-1, b, a+b);
    return ans;
}

*/

//Better code

int fibonacci_series(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = fibonacci_series(n-1) + fibonacci_series(n-2);
    return ans;
}

int main(){

    int n;
    cin>>n;

    fibonacci_series(n);

    int ans = fibonacci_series(n);
    cout<<endl<<ans<<endl;

}