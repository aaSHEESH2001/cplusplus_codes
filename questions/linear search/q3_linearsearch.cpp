#include<iostream>
using namespace std;

int l_search(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){

    int array[10];
    int size = 10;
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }
    
    int key;
    cout<<"Enter element you want to search : "<<endl;
    cin>>key;

    int res = l_search(array, size, key);

    if(res == -1){
        cout<<"Element is not present in the array ";
        cout<<res;
    }
    else{
        cout<<"The element is at index : "<<res;
    }
}