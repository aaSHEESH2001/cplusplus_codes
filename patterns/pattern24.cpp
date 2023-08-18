#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count = 1;
    /*By using for loop*/
    for(int i = 0; i<=n; i++){
        for(int j = 0; j <= n-i-1; j++){
            cout<<" ";
        }
        for(int k = 0; k <= i; k++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    count = 1;
    int i = 0;
    while(i <= n){
        int j = 0;
        int k = 0;
        while(j <= n-i-1){
            cout<<" ";
            j++;
        }
        while(k<=i){
            cout<<count;
            count++;
            k++;
        }
        cout<<endl;
        i++;
    }
}