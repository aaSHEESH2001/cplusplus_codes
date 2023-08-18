#include<iostream>
using namespace std;

bool binary_search(int *arr,int start,int end,int k){
    if(start>end){
        return false;
    }
    int mid = (start+end)/2; //start+(end-start)/2
    if(arr[mid] == k){
        return true;
    }
    else{
        bool result;
        if(arr[mid] < k){
            result = binary_search(arr,mid+1,end,k);
        }
        else{
            result = binary_search(arr,start,mid-1,k);
        }
        return result;
    }
}

int main(){

    int arr[10] = {1,12,23,34,45,56,67,78,89,90};
    int key;
    cin>>key;

    bool res = binary_search(arr,0,9,key);

    if(res){
        cout<<"Element present";
    }
    else{
        cout<<"Element not present";
    }

    return 0;
}