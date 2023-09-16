#include<iostream>
using namespace std;

//As both the parent and child class have speak function the speak function of child class got more priority and it got executed when we call speak function through class B object. This is called function overriding.

class A{

    public:
    void speak(){
        cout<<"Person A is speaking."<<endl;
    }
};

class B: public A{
    public:
    void speak(){
        cout<<"Person B is speaking."<<endl;
    }
};

int main(){

    B obj;
    obj.speak();

}