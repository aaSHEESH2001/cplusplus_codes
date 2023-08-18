#include<iostream>
using namespace std;

int reverse_array(int array[], int size){
    int temp;
    int i = 0;
    int j = size - 1;
    while(i <= j){
        swap(array[i],array[j]);
        /*
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        */
        i++;
        j--;
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
    reverse_array(arr,size);
    cout<<endl<<"Reversed Array : "<<endl;
    print_array(arr,size);
}