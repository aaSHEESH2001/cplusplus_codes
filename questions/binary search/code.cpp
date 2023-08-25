#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int key){
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {1,12,19,21,34,55,67,78};
    int key;
    cin>>key;
    int result = binarySearch(arr,key);
    if(result == -1){
        cout<<"The element is not present";
    }
    else{
        cout<<"The element is present at index "<<result;
    }
}