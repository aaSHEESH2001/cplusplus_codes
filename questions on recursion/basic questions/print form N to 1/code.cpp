#include<iostream>
using namespace std;

void print_1_to_n(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    print_1_to_n(--n);
}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    print_1_to_n(n);
}