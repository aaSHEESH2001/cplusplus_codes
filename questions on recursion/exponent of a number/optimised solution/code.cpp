#include<iostream>
using namespace std;

int exp_Number(int a, int b){
    
    if(b == 1)
        return a;
    
    int ans = exp_Number(a, b/2);

    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}

int main(){

    int num,e;

    cout<<endl<<"Enter a number : ";
    cin>>num;
    cout<<endl<<"Enter the power : ";
    cin>>e;

    int res = exp_Number(num,e);

    cout<<endl<<endl<<"The result is : "<<res;

}