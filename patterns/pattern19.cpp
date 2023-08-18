#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    /*By using for loop*/
    for(int i = 0; i<=n; i++){
        for(int j = 0; j <= n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    int i = 0;
    while(i <= n){
        int j = 0;
        while(j <= n-i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}