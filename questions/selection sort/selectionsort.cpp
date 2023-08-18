#include<iostream>
using namespace std;

void selection_sort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){

    int arr[] = {64,25,12,22,11};

    cout<<"Array before sorting: "<<endl;
    print_array(arr,5);
    selection_sort(arr,5);
    cout<<endl;
    cout<<"Array after sorting:"<<endl;
    print_array(arr,5);
    return 0;
}