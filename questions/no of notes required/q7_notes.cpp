#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your total amount : ";
    cin>>num;
    int ans = 0;

    while(num != 0){
        if(num / 100 >= 1){
            ans = num/100;
            num = num % 100;
            cout<<"No of notes required of "<<100<<" is "<<ans<<endl;
        }
        else if(num / 50 >= 1){
            ans = num/50;
            num = num % 50;
            cout<<"No of notes required of "<<50<<" is "<<ans<<endl;
        }
        else if(num / 20 >= 1){
            ans = num/20;
            num = num % 20;
            cout<<"No of notes required of "<<20<<" is "<<ans<<endl;
        }
        else{
            ans = num/1;
            num = num % 1;
            cout<<"No of notes required of "<<1<<" is "<<ans<<endl;
        }
    }   
}