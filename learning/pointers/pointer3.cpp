#include<iostream>
using namespace std;

int print(int *p){

    cout<<"Address of p inside the function :"<<p<<endl;
    cout<<"Value of p inside the function : "<<*p<<endl;

    //p = p+1;
    //cout<<"After in print : "<<p<<endl;

    *p = *p + 15;
    cout<<"AFter value in print : "<<*p<<endl;

}

int getSum(int arr[] /*  (*arr)  */,int size){
    //cout<<sizeof(arr)<<endl;  arr is not the whole array it is a pointer to the first memory block of array and we can also write it as *arr

    arr = arr+1;
    arr = arr+1;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

/*
    //How to pass pointer to a function
    int value = 5;
    int *p = &value;

    cout<<"Address of p in main : "<<p<<endl;
    cout<<"Value of p in main : "<<*p<<endl;

    print(p);

    //Now all the things in c++ is passed by value to a function so if we are passing pointer p to the function it is creating another pointer pointing to the same address.

    //cout<<"After in main : "<<p<<endl;

    //But if we try to change the value in the print function it will also get change in the main function as well because both the print function pointer and main function pointer are pointing the same memory location.

    cout<<"After value in main : "<<*p;

*/

    int arr[10] = {1,2,3,4,5,6};
    
    int *ptr = arr; // int *ptr = &arr[0]

    cout<<ptr[2];

    //cout<<"Sum of array elemetns is : "<<getSum(arr,6);

}