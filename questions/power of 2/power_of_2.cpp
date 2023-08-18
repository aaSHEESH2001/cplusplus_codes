#include<iostream>
using namespace std;

/*
int power_of_2(int num){

    if(num == 0){
        return false;
    }
    if(num == 1){
        return true;
    }
    return num % 2 == 0 && power_of_2(num/2);
}
*/
int power_of_2(int num){
    if(num == 0){
        return false;
    }
    while(num % 2 == 0){
        num /= 2;
    }
    return num == 1;
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool res = power_of_2(n);
    
    if(res){
        cout<<"the number is a power of 2";
    }
    else{
        cout<<"the number is not a power of 2";
    }
}
