#include<iostream>
using namespace std;
#include<array>

int main(){

    array<int,5> a = {1,2,3,4,5};
    int arr[] = {6,7,8,9,10};

    int size1 = sizeof(arr)/sizeof(int);
    cout<<size1<<endl;

    int size2 = a.size();
    cout<<size2<<endl;

    cout<<"First element : "<<a.front();
    cout<<endl<<"Last element : "<<a.back();
    cout<<endl<<"Element :"<<a.at(3);
    cout<<endl<<"Empty or not : "<<a.empty();

    return 0;
}