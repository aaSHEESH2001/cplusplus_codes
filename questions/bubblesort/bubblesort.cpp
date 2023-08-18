#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    for(int i = size-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){

    int arr[] = {10,1,7,6,14,9};

    cout<<"Array before sorting: "<<endl;
    print_array(arr,6);
    bubble_sort(arr,6);
    cout<<endl;
    cout<<"Array after sorting:"<<endl;
    print_array(arr,6);
    return 0;
}
