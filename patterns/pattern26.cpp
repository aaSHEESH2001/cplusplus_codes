#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i = 0;
    while(i<n){
        int j = 0;
        while(j <= n-i-1){
            cout<<j+1;
            j++;
        }
        int k = 0;
        while(k < i){
            cout<<"*";
            k++;
        }
        int l = 0;
        while(l<i){
            cout<<"*";
            l++;
        }
        int m = 0;
        while(m <= n-i-1){
            cout<<n-m-i;
            m++;
        }
        cout<<endl;
        i++;
    }
}