#include<iostream>
#include<vector>
using namespace std;

int pivot_index(vector<int> arr, int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(true){
        int sum1 = 0,sum2 = 0;
        for(int i=0; i<mid; i++){
            sum1 = arr[i] + sum1;
        }
        for(int j=size-1; j > mid; j--){
            sum2 = arr[j] + sum2;
        }
        if(sum1==sum2){
            return mid;
        }
        else if(sum1>sum2){
            mid--;
        }
        else if(sum2>sum1){
            mid++;
        }
        else{
            return -1;
        }
    }
}

int main(){

    vector<int> arr = {1,7,3,6,5,6};

    int size = arr.size();

    int ans = pivot_index(arr,size);

    cout<<"The index position is : "<<ans;

    return 0;
}