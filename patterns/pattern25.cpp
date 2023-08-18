#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    /*By using for loop*/
    for(int i = 0; i<=n; i++){
        for(int j = 0; j <= n-i-1; j++){
            cout<<" ";
        }
        for(int k = 0; k <= i; k++){
            cout<<k+1;
        }
        for(int l = 0; l < i; l++){
            cout<<i-l;
        }
        cout<<endl;
    }

    int i = 0;
    while(i <= n){
        int j = 0;
        int k = 0;
        int l = 0;
        while(j <= n-i-1){
            cout<<" ";
            j++;
        }
        while(k<=i){
            cout<<k+1;
            k++;
        }
        while(l < i){
            cout<<i-l;
            l++;
        }
        cout<<endl;
        i++;
    }
}