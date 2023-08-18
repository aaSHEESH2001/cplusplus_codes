#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    /*By using for loop*/
    for(int i = 0; i<=n; i++){
        for(int k = 0; k <= i; k++){
            cout<<" ";
        }
        for(int j = 0; j <= n-i-1; j++){
            cout<<i+j+1;
        }
        cout<<endl;
    }

    int i = 0;
    while(i <= n){
        int j = 0;
        int k = 0;
        while(k<i){
            cout<<" ";
            k++;
        }
        while(j <= n-i-1){
            cout<<i+j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}