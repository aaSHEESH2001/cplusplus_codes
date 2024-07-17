#include<iostream>
using namespace std;

void printname(char *name, int n){
    if(n==0){
        return ;
    }
    cout<<name<<endl;
    printname(name,--n);
}

int main(){
    int n;
    cout<<"Enter the no. of times you want to print name : ";
    cin>>n;
    char name[20] = "Ashish Negi";
    printname(name,n);
}