#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size, int i=1){
    
    if(i >= size){
        return ;
    }
    int temp = -1;
    int j = i-1;
    temp = arr[i];
    for(; j>= 0; j--){
        if(arr[j] > temp){
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1] = temp;

    i = i+1;

    insertion_sort(arr,size,i);
    return ;
}

int main(){

    int arr[5] = {2,12,5,6,9};
    cout<<endl<<"Actual Array : "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    insertion_sort(arr,5);    
    cout<<endl<<"Sorted Array : "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

}