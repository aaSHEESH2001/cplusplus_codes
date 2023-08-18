#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
/* By using while loop */
    int i = 1;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
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
        for(int j = 1; j <=n; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}


