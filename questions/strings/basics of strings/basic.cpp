#include<iostream>
using namespace std;

int main(){

    //How to initialize a string.
    char str[20] = "Hello World"; 

    cout<<str<<endl; //Printing the whole string

    cout<<str[1]<<endl; //Printing element at index 1
    cout<<str[2]<<endl; //Printing element at index 2

    //C++ string are mutable so we can change the value of elements in the string.

    str[0] = 'B';   //Changing value at index 0
    str[1] = 'y';   //Changing value at index 1 
    str[2] = 'e';   //Changing value at index 2
    str[3] = ' ';   //Changing value at index 3
    str[4] = ' ';   //Changing value at index 4
    str[5] = ' ';   //Changing value at index 5
    cout<<str<<endl;

    //Input string from user
    char name[20]; 
    cout<<"Enter your Name : ";
    //cin>>name; 
    //cout<<"Your name is :"<<name;

    //The problem with cin function is that it ignores the value after space, tab and new line character. To overcome this problem we have a different functions like get or getline

    gets(name);
    cout<<"Your name is : "<<name;

}