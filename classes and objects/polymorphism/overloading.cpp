#include<iostream>
using namespace std;

class Sum{
    public:
    int add(int num1,int num2){
        cout<<"Two parameters "<<endl;
        return num1 + num2;
    }

    int add(int num1, int num2, int num3){
        cout<<"Three parameters"<<endl;
        return num1 + num2 + num3;
    }

    // string add(int num1, int num2){
    //     cout<<num1 + num2;
    //     return "This will throw and error";  
    // }

    string add(string s1, string s2){
        cout<<"Two parameters and different return type"<<endl;
        return s1 + " " +s2;
    }

    string add(string s1, string s2, string s3){
        cout<<"Three parameters and different return type"<<endl;
        return s1 + " " + s2 + " " + s3;
    }
};

int main(){

    Sum s;

    cout<<s.add(5,6)<<endl;
    cout<<s.add(6,7,8);
    cout<<endl;
    cout<<s.add("Hello","Ashish");
    cout<<endl;
    cout<<s.add("Hello","Ashish","Negi");

}