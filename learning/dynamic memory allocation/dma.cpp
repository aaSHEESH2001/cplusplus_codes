#include<iostream>
using namespace std;

int main(){

/*
    int* p = new int; //dynamic memory allocation

    *p = 10;

    cout<<p<<endl;
    cout<<*p<<endl;

    delete p;

    cout<<*p<<endl;
    cout<<p<<endl;

*/

    //To create an array of variable size

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int* p = new int[n];

    for(int i = 0; i<n; i++){
        cin>>p[i];
    }

    for(int i = 0; i<n; i++){
        cout<<p[i]<<" ";
    }

    delete[] p;

    return 0;
}