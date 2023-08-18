#include<iostream>
using namespace std;

int is_sorted(int arr[],int size){

    int result;

    if(size == 1){
        result = 1;
        return result;
    }

    if(arr[size-1] < arr[size-2]){
        result = 0;
        return result;
    }

    result = is_sorted(arr,size-1);

    return result;

}

int main(){

    int arr[10] = {29,2,3,4,5,21,22,23};

    int res = is_sorted(arr,8);

    if(res == 1){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }

    return 0;
}

/*
------------------------------Alternative-----------------------------------

bool isSorted(int *arr, int size){
    //base case 
    if(size==0 || size == 1){
        return true;
    }
    if(arr[0] > arr[i]){
        return false;
    }
    else{
        bool res = isSorted(arr+1, size-1);
        return res;
    }
}

*/