#include<iostream>
#include<vector>
using namespace std;

/*
Q1->   What is Vector?
Ans1-> Vector is a (dynamic array). That means its value can change during the code execution or runtime.
*/

int main(){

    vector<int> v = {1,2,3,4,5};

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    /*
    The size functions tell us the number of elements present in the vector whereas the capacity function tells about the total number of elements it can hold.
    */
   cout<<endl;
   cout<<"Size of vector v ->"<<v.size()<<endl;
   cout<<"Capacity of vector v ->"<<v.capacity();

   /*
    Size and Capacity after adding an element.
   */

    v.push_back(6);
    v.push_back(7);

    cout<<endl;
    cout<<"Size of vector v ->"<<v.size()<<endl;
    cout<<"Capacity of vector v ->"<<v.capacity();

    cout<<endl<<"Front element : "<<v.front();
    cout<<endl<<"Back element : "<<v.back();
    cout<<endl<<"element at 3rd position : "<<v.at(2);
    cout<<endl<<"empty or not : "<<v.empty();
    
    cout<<endl<<"Before pop : ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    v.pop_back();

    cout<<"After Pop : ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    /*
    When we clear the vector it size becomes zero but it capacity remains the same
    */
    v.clear();
    cout<<"Size -> "<<v.size()<<endl;
    cout<<"Capacity -> "<<v.capacity()<<endl;

    /*
    When we already know the size of the vector this is how we create that type of vector.
    */

    vector<int> a(5);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    /*
    By default it sets all the value to 0. But we can set all values of our the same choice by this method.
    */

   vector<int> b(5,1);
   for(int i:b){
    cout<<i<<" ";
   }cout<<endl;

    /*
    To copy a vector to another vector.
    */
   vector<int> c(b);
   for(int i:c){
    cout<<i<<" ";
   }cout<<endl;

    return 0;
}