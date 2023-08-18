#include<iostream>
using namespace std;

int main(){

/* By using while loop */
    int i = 1;
    int n,count = 1;
    cin>>n;
    while(i <=n){
        int j = 1;
        while(j <= i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    count = 1;
/* By using for loop */
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}


