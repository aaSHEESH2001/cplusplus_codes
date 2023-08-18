#include<iostream>
using namespace std;

void column_sum(int arr[3][4], int n, int m){
    int temp[4]= {0};
    for(int i=0; i<m; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum = sum + arr[j][i];
        }
        temp[i] = sum;
    }
        for(int i=0; i<4; i++){
        cout<<"Sum of "<<i+1<<" row : "<<temp[i]<<endl;
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

    column_sum(arr,3,4);

}