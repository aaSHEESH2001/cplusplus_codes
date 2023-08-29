#include<iostream>
using namespace std;

void selection_sort(int arr[], int size, int i = 0){
    if(i >= size){
        return ;
    }
    int minIndex = i;
    for(int j = i+1; j < size; j++){
        if(arr[minIndex] > arr[j]){
            minIndex = j;
        }
    }
    swap(arr[minIndex],arr[i]);

    i = i+1;

    selection_sort(arr,size,i);
    return ;

}

int main(){

    int arr[5] = {9,12,2,6,5};
    cout<<endl<<"Actual Array : "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    selection_sort(arr,5);    
    cout<<endl<<"Sorted Array : "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

}