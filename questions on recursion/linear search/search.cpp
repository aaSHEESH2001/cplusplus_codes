#include<iostream>
using namespace std;

int linear_search(int arr[],int size, int ele){
    if(size==0){
        return -1;
    }
    if(arr[0] == ele){
        return 0;
    }
    else{
        int res = linear_search(arr+1,size-1,ele);
        return res;
    }
}

int main(){

    int arr[10] = {1,12,23,34,45,56,67,78,89,90};
    int element;
    cin>>element;

    int index = linear_search(arr,10,element);

    if(index<0){
        cout<<"Element is not present";
    }
    else{
        cout<<"Element is present";
    }

    return 0;
}