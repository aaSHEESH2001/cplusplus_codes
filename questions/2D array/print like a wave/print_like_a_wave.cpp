#include<iostream>
using namespace std;

void print_wave(int arr[3][11], int nRows, int mCols){
    int col = 0;
    while(col < mCols){
        if(col%2==0){
            int row = 0;
            while(row < nRows){
                cout<<arr[row][col]<<" ";
                row++;
            }
        }
        else{
            int row = nRows-1;
            while(row >= 0){
                cout<<arr[row][col]<<" ";
                row--;
            }
        }
        col++;
    }
}

int main(){
    int arr[3][11] = {{0, 18, 45, 37, 43, 26, 29, 24, 35, 24, 14}, {9, 11, 24, 31, 18, 38, 26, 42, 27, 30, 24}, {9, 8, 27, 7, 41, 32, 42, 13, 40, 6, 48}}; 
    for(int i=0; i<3;i++){
        for(int j=0; j<11;j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl; 
    cout<<endl;
    print_wave(arr,3,11);
}