#include<iostream>
using namespace std;

// In the code below we are over writing the functionality of the + operator and it will behave as a multiplication operator. This is also called operator overloading.

class A{

    int age = 10;

    public:
        int operator+(int num1){
            return this -> age + num1;
        }

};

int main(){

    A obj;

    cout<<obj+20;

}