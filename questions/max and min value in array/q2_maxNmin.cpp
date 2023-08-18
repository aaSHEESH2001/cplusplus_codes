#include<iostream>
using namespace std;

int max(int arr[], int size){

    int max = INT32_MIN;
    for(int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int size){

    int min = INT32_MAX;
    for(int i = 0; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void print(int arr[], int size){
    int maximum_value = max(arr,size);
    int minimum_value = min(arr,size);

    cout<<"Maximum Value of arr is : "<<maximum_value<<endl;
    cout<<"Minimum Value of arr is : "<<minimum_value;
}

int main(){

    int size = 10;
    int arr[10];
    for(int i = 0; i < 10; i++){
        cin>>arr[i];
    }
    print(arr,size);

}