#include<iostream>
using namespace std;

int main(){

    int arr[9] = {2,3,4,5,25,4,3,2,25};
    int ans = 0;

    for(int i = 0; i <= 8; i++){
        ans = ans ^ arr[i];
    }
    cout<<"The unique element is : "<<ans;
}