#include<iostream>
using namespace std;

int main(){

    int num = 5;
    double d1 = 5.6;
    char c1 = 'b';

    cout<<num<<endl;

    //Address of Operator - &
    
    cout<<&num<<endl;

    //Pointer to integer
    int *p = &num;

    cout<<"Value at pointer p "<<*p<<endl;
    cout<<"Address at pointer p "<<p<<endl;
    cout<<"Address of pointer p "<<&p<<endl;

    //Second way of creating pointer 
    int *q = 0;
    q = &num;

    cout<<"Value at pointer q "<<*p<<endl;
    cout<<"Address at pointer q "<<p<<endl;
    cout<<"Address of pointer q "<<&p<<endl;

    //Pointer to double
    double *p1 = &d1;
    cout<<"Address at pointer p1 : "<<p1<<endl; //Address that pointer points to
    cout<<"Value at pointer p1 : "<<*p1<<endl; //Value that pointer points to

    //Pointer to char
    char *p2 = &c1;
    cout<<"Address at pointer p2 : "<<p2<<endl;
    cout<<"Value at pointer p2 : "<<*p2<<endl;

    //Size of pointer - 8bytes or 4bytes because all the pointer store address of a memory block so they all have the same size

    cout<<"Size of pointer 0: "<<sizeof(p)<<endl;
    cout<<"Size of pointer 1: "<<sizeof(p1)<<endl;
    cout<<"Size of pointer 1: "<<sizeof(p2)<<endl;

    //How to not define a pointer
    //int *p; bad practice

    int a = *p;
    a++;
    cout<<"Value at pointer p : "<<*p<<endl;
    cout<<"Value of a : "<<a<<endl;

    //Copying a pointer 
    int *q1 = p;
    cout<<"value at q "<<*q<<endl<<"Value at p "<<*p<<endl;
    cout<<"Address at q "<<q<<endl<<"Address at p "<<p<<endl;
    cout<<"Address of q "<<&q<<endl<<"Address of p "<<&p<<endl;

    //Pointer arithmetic
    cout<<"After Address at p : "<<p<<endl;
    p = p + 1;
    cout<<"Before Address at p : "<<p;

    return 0;
}