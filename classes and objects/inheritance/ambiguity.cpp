#include<iostream>
using namespace std;

//In case of multiple inheritance there is a chance that both the parents can have the function with the same name. And when inheriting classes the child class will have both the functions. Now the question is which function to call or how to call it. So it can be solve by scope resolution operator 

class A{
    public:
    void func(){
        cout<<"Class A function"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"Class B function"<<endl;
    }
};

class C: public B, public A{
};

int main(){
    C obj;
    //obj.func(); //this line will throw error
    obj.A::func();
    obj.B::func();
}