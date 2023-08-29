#include<iostream>
using namespace std;

void bubble_sort(int *arr, int size){

    if(size == 0 || size == 1){
        return ;
    }

    for(int i = 0; i< size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubble_sort(arr,size-1);

    return ;
}

int main(){

    int arr[5] = {2,5,1,6,4};
    cout<<endl<<"Actual Array : "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    bubble_sort(arr,5);    
    cout<<endl<<"Sorted Array : "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

}