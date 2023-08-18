#include<iostream>
using namespace std;

int main(){

/* By using while loop */
    int i = 1;
    int n;
    cin>>n;
    
    char ch = 'A';
    while(i <=n){
        int j = 1;
        while(j <= i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

/* By using for loop */
    
    ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}


