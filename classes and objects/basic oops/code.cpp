#include<iostream>
#include<string>
using namespace std;

//class
class Person{

    private: //access modifier
        char account_no[20] = "PNB12345"; //property
        int balance; //property

    public: //access modifier

//Default or non parameterised constructor
    Person(){
        cout<<"This is the default constructor"<<endl;
    }

//Parameterised constructor
    Person(string name){
        this->name = name;
        cout<<"Name of the person is "<<name<<endl;
    }

        string name; //property
        int age = 22; //property
        char status[20] = "Unmarried"; //property

    //behaviour
        int get_balance(){
            return balance;
        }

        int set_balance(int b){
            balance = b;
        }

        char* get_acc_no(){
            return account_no;
        }

        void greet(){
            cout<<"Hello, My name is "<<name<<". What is your name?";
        }

        ~Person(){
            cout<<this->name<<" object got deleted"<<endl;
        }
};

int main(){
    
    //copy constructor
    //When we create the object of a class a copy constructor is also got initialised inclusively

    Person p("Rohit");

    Person *p1 = new Person(p);

    cout<<"p name is "<<p.name<<endl;
    cout<<"p1 name is "<<p1->name<<endl;

    delete p1;
    // Person *p = new Person();
    // Person p1;

    // p1.name = "Mohit";

    // Person p2("Sachin");
    // Person *p3 = new Person("Mukesh");

    // p -> name = "Rohit";

    // cout<<"Hello,first p3 is deleted"<<endl;

    // delete p3;

    // cout<<"Hi, Now p will get deleted"<<endl;

    // delete p;

    // cout<<"And at last p1 and p2 got deleted"<<endl;

    // //static allocation
    // Person p1;

    // //To access the data members of the object we use . operator
    // cout<<"Age of person is "<<p1.age<<endl;
    // cout<<"Name of the person is "<<p1.name<<endl;

    // cout<<"Account no is "<<p1.get_acc_no()<<endl;

    // p1.set_balance(5000);

    // cout<<"Balance of the person is "<<p1.get_balance()<<endl;

    // p1.greet();

    // cout<<endl;
    // //dynamic allocation

    // Person *p2 = new Person;
    
    // (*p2).set_balance(10000);
    // cout<<"Balace of person 2 is "<<(*p2).get_balance()<<endl;
    // cout<<"Name of person 2 is "<<(*p2).name<<endl;

    // //Another way to access the data members of the dynamically created class
    // p2 -> set_balance(4000);
    // cout<<"Balance of person 2 is "<<p2 -> get_balance();

}