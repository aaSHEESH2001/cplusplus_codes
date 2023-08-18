#include<iostream>
using namespace std;

void rotate(int arr[4][4],int n, int m){
    int row= 0;
    int col=0;
    for(int i=0; i<(n/2); i++){
        for(int r=0; r<=2; r++){
            swap(arr[row][col+r],arr[row+r][m-1]);
            swap(arr[row][col+r],arr[n-1][m-1-r]);
            swap(arr[row][col+r],arr[n-1-r][col]);
        }
    }
    

    for(int i = 0; i< 4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    rotate(arr,4,4);
    return 0;
}