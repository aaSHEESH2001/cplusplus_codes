#include<iostream>
#include<vector>
using namespace std;

int  first_occurence(vector<int>& arr, int size, int key){

    int start = 0;
    int end = size - 1;
    int ans;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
    }
    return ans;
}

void last_occurence(vector<int>& arr, int size, int key){

    int start = 0;
    int end = size - 1;
    int ans;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        else if(key < arr[mid]){ 
            end = mid-1;
        }
    }
    cout<<"last occurence : "<<ans<<endl;
}

int main(){

    vector <int> arr = {0, 0, 1, 1, 2, 2, 2, 2};

    int key = 2;

    int size = arr.size();
    cout<<size<<endl;

    first_occurence(arr,size,key);
    last_occurence(arr,size,key);

    return 0;
}