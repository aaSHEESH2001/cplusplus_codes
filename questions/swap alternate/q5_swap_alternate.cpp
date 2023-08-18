#include<iostream>
using namespace std;

void swap_alternate(int array[],int size){
    int i = 0;
    int j = 1;
    while(j <= size-1){
        swap(array[i],array[j]);
        i = i+2;
        j = j+2;
    }
}

int print_array(int array[], int size){
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
}

int main(){

    int arr[10] = {54,35,67,12,9,79,41,90,83,17};
    int size = 10;

    cout<<endl<<"Normal Array : "<<endl;
    print_array(arr,size);
    swap_alternate(arr,size);
    cout<<endl<<"Alternate Swapped Array : "<<endl;
    print_array(arr,size);
}