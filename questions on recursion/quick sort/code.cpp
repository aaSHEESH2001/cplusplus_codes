#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivotNum = arr[e];
    int pivotIndex = s;

    for(int i = s; i < e; i++){
        if(arr[i] <= pivotNum){
            swap(arr[i],arr[pivotIndex]);
            pivotIndex = pivotIndex + 1;
        }
    }
    swap(arr[e],arr[pivotIndex]);
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s >= e){
        return ;
    }
    int pivotIndex = partition(arr,s,e);
    quickSort(arr,s,pivotIndex-1);
    quickSort(arr,pivotIndex+1, e);
}

int main(){

    int arr[10] = {7,2,1,6,8,5,3,10};

    quickSort(arr,0,7);

    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;

}