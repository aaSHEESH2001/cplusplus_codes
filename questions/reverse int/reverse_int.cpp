#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int ans = 0;
    bool flag;
    while(num != 0){
        int digit = num%10;
        
        if(ans > INT32_MAX || ans < INT32_MIN){
            flag = false;
        }

        ans = ans*10 + digit;
        num = num/10;
    }
    flag = true;

    if(flag) cout<<ans;
    else cout<<"Out of range";
}