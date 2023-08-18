#include<iostream>
using namespace std;

int main(){

/*

    int arr[5] = {1,2,3,4,5};

    cout<<"Address of arr : "<<arr<<endl;
    cout<<"Address of arr : "<<&arr<<endl;
    cout<<"Address of first value of arr : "<<&arr[0]<<endl;

    //Pointer 
    //The name of the array is also works as a pointer and it stores the memory address of first block as we have showed above

    cout<<"Value at 1st position "<<*arr<<endl; //Dereferencing 

    int *ptr = &arr[0];

    cout<<"Size of arr : "<<sizeof(&arr)<<endl;
    cout<<"Size of ptr : "<<sizeof(ptr)<<endl;

*/

    /*
    If we try to do arithmetic operations on arr it will throw an error because it is already mapped to a address in symbol table but we can do arithmetic operation on a pointer because we are not changing its address we are only changing the value it contains(that is the address it is pointing to).
    */

    //Error
        //arr = arr + 1;

    // int arr[10] = {1,2,3};

    // int *ptr = &arr[0];
    // cout<<"-> ptr "<<ptr<<endl;
    // ptr = ptr + 1;
    // cout<<"-> ptr "<<ptr<<endl;

    // return 0;

    /*
    In case of integer array the cout function print the address of first memory block of the array but in case of string or character array it print the whole array.
    */

   //Example to explain
   int arr[10] = {1,2,3,4};
   cout<<"Address : "<<arr<<endl;
   cout<<"Address of first element : "<<&arr[0]<<endl;

   char str[10] = "abcdef";
   cout<<str<<endl;

//Important point
    int *ptr = &arr[0];
    char *ptr1 = &str[0];

    cout<<"Integer pointer : "<<ptr<<endl;
    cout<<"Character pointer : "<<ptr1<<endl;

//So that means we donnot have to dereference the pointer in case of a charater array in cout function it already did itself

}