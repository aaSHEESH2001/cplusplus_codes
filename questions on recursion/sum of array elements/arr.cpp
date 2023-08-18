#include<iostream>
using namespace std;

int sum_array(int arr[],int size){
    int sum = 0;
    if(size==0 || size==1){
        return *arr;
    }
    sum = sum_array(arr+1,size-1) + *arr;
    return sum;
}

int main(){

    int arr[10] = {1,12,552,5,9,13,54,23};

    int sum = sum_array(arr,8);

    cout<<sum;

    return 0;
}