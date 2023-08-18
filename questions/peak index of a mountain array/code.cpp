#include<iostream>
#include<vector>
using namespace std;

int peak_index(vector<int> arr, int size){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }   
    return start;
}

int main(){

    vector<int> arr = {0,10,5,2};

    int size = arr.size();

    int peak = peak_index(arr,size);

    cout<<"peak index of the mountain array is : "<<peak;
}