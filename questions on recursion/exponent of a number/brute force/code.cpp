#include<iostream>
using namespace std;

int exp_Number(int num,int exp, int ans = 1){
    if(exp <= 0){
        return ans;
    }
    exp--;
    int res = exp_Number(num, exp, num*ans);

    return res;
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