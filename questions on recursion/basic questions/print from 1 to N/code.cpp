#include<iostream>
using namespace std;

void print_1_to_n(int i,int n){
    if(i==n){
        return ;
    }
    cout<<i+1<<" ";
    print_1_to_n(++i,n);
}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int i=0;
    print_1_to_n(i,n);
}