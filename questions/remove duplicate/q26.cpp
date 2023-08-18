#include<iostream>
using namespace std;

int Remove_duplicate(int arr[],int n){
    int i = 0;
    int j = 1;
    while(j < n){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    return i+1;
}

void print_arr(int arr[], int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int n = 10;
    cout<<"Original Array :"<<endl;
    print_arr(arr,n);
    cout<<endl;

    int new_size = Remove_duplicate(arr,n);

    cout<<"Changed Array :"<<endl;
    cout<<endl;
    print_arr(arr,new_size);

    return 0;
}