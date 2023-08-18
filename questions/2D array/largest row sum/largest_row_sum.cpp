#include<iostream>
using namespace std;

int largest_row_sum(int arr[3][3], int n, int m){
    int largest_sum = INT32_MIN;
    int maxIndex=-1;
    //int temp[3] = {0};
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum = sum + arr[i][j];
        }
        //temp[i] = sum;
        if(largest_sum<sum){
            largest_sum = sum;
            maxIndex = i;
        }
    }
    return maxIndex;
    
/*
    for(int i=0; i<3-1; i++){
        if(temp[i] > temp[i+1]){
            maxIndex = i;
        }
        else{
            maxIndex = i+1;
        }
    }
    return maxIndex;
*/
}

int main(){

    int arr[3][3] = {22,54,30,67,14,15,88,3,10};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int largest_row = largest_row_sum(arr,3,3);
    
    cout<<"The row which has the largest sum is : "<<largest_row;
}