#include<iostream>
using namespace std;

class Human{

    public:
        static int weight; //class variable
        static int age; //class variable
        char color[10]; //instance variable
        char name[10]; //instance variable
        char gender; //instance variable

    public:
        void walk(){ //instance function
            cout<<"The human is walking ";
        }

        static void talk(){ //class function
            cout<<"The human is talking ";
        }

};

//initialisation of class variables
int Human::weight = 90; 
int Human::age = 25;

int main(){

    Human h;

    cout<<Human::weight<<endl;
    cout<<Human::age<<endl;
    Human::talk();
    cout<<endl;


}