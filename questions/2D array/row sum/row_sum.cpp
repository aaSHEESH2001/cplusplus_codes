#include<iostream>
using namespace std;

void row_sum(int arr[3][4], int n, int m){
    int temp[3]= {0};
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum = sum + arr[i][j];
        }
        temp[i] = sum;
    }
    for(int i=0; i<3; i++){
        cout<<"Sum of "<<i<<" row : "<<temp[i]<<endl;
    }
}

int main(){

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    row_sum(arr,3,4);

}