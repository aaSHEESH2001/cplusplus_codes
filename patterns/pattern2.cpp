#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin>>n;
/* By using while loop */
    while(i <=n){
        int j = 1;
        while(j <= n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

/* By using for loop */
    for(int i = 1; i <= n; i++){
    for(int j = 1; j <=n; j++){
        cout<<i;
    }
        cout<<endl;
    }
}