#include<iostream>
using namespace std;

int main(){

/* By using while loop */
    int i = 1;
    int n;
    cin>>n;
    while(i <=n){
        int j = 1;
        while(j <= i){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }

/* By using for loop */
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<i+j-1;
        }
        cout<<endl;
    }
}


