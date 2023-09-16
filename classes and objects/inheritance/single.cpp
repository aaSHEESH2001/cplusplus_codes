#include<iostream>
using namespace std;

class A{
    public:
    int height;
    int weight;

    public:
    void greet(){
        cout<<"hello"<<endl;
    }
};

class B: public A{

    public:
    int age;

    public:
    void message(){
        cout<<"Hi"<<endl;
    }

};

int main(){

    B obj;

    obj.weight = 70;
    cout<<"weight = "<<obj.weight<<endl;
    obj.height = 160;
    cout<<"height = "<<obj.height<<endl;
    obj.greet();
    obj.message();

}