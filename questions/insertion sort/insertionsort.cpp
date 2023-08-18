#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j >= 0; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];  
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}


/*
void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        for(int j = i-1; j >= 0; j--){
            if(arr[j+1] < arr[j]){
                arr[j+1] = arr[j];  
                arr[j] = temp;
            }
        }
    }
}
*/

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){

    int arr[] = {5,14,11,9,3,7,4};

    cout<<"Array before sorting: "<<endl;
    print_array(arr,7);
    insertion_sort(arr,7);
    cout<<endl;
    cout<<"Array after sorting:"<<endl;
    print_array(arr,7);
    return 0;
}
