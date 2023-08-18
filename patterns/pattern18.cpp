#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    /*By using for loop*/
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        for(int k = 0; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*By using while loop*/
    int i = 0;
    while(i < n){
        int j = 0;
        while(j < n-i-1){
            cout<<" ";
            j++;
        }
        int k = 0;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}