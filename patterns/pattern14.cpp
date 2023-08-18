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
            char ch = 'A' + i - 1;
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

/* By using for loop */
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            char ch = 'A' + i - 1;
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}


