#include<iostream>
using namespace std;

int main(){

/* Pointer to integer and other data types

    int num = 10;

    int* ptr = &num; //Pointer to integer and it will store the address of num

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr = *ptr + 100;
    cout<<num<<endl;

    char ch = 'A';
    char* ptr2 = &ch;

    cout<<ch<<endl;
    cout<<*ptr2<<endl;
    cout<<&ch<<endl;
    cout<<int(ptr2)<<endl; 

*/

/*

    //First way to create a string. By giving a string literal to the variable.
    char ch1[] = "Hello";


    //Second way of creating a string. By giving it an array of characters and when we define the string on go we dont need to mention the size.
    char ch2[] = {'W','o','r','l','d','\0'};


    //Third way of creating a string
    char ch3[10]; 

    ch3[0] = 'A';
    ch3[1] = 'S';
    ch3[2] = 'H';
    ch3[3] = 'I';
    ch3[4] = 'S';
    ch3[5] = 'H';
    ch3[6] = '\0';

    int i = 0;
    while(ch3[i] != '\0'){
        cout<<ch3[i];
        i++;
    }

*/  

/*

    char ch[] = "Hello World";
    char* ptr = ch;

    cout<<sizeof(ch)<<endl;
    cout<<"Memory location of ch : "<<&ch[0]<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<"Memory location of ptr : "<<&ptr[0]<<endl;

    int arr[] = {1,2,3,4,5,6,7,8};
    int* ptr1 = arr;

    cout<<sizeof(arr)<<endl;
    cout<<"Memory location of arr : "<<&arr[0]<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<"Memory location of ptr1 : "<<ptr1<<endl;

*/

    char* ch = "Hello"; //Bad way to initialize a string

    ch[1] = 'A';

    int* a = {1,2,3,4,5,6,7,8}; //Error

    return 0;
}