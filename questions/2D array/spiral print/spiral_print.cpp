#include<iostream>
using namespace std;

void print_spiral(int arr[4][4], int nRows, int mCols){
    int start_row = 0;
    int end_row = nRows-1;
    int start_col = 0;
    int end_col = mCols-1;
    while(start_row <= end_row || start_col <= end_col){
        for(int i=start_col; i<=end_col; i++){
            cout<<arr[start_row][i]<<" ";
        }
        start_row++;
        for(int i=start_row; i<=end_row;i++){
            cout<<arr[i][end_col]<<" ";
        }
        end_col--;
        for(int i=end_col; i>=start_col; i--){
            cout<<arr[end_row][i]<<" ";
        }
        end_row--;
        for(int i=end_row; i>=start_row; i--){
            cout<<arr[i][start_col]<<" ";
        }
        start_col++;
    }
}

int main(){
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    for(int i=0; i<4;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl; 
    cout<<endl;
    print_spiral(arr,4,4);
}