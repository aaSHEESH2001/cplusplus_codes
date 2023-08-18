#include<iostream>
using namespace std;

/*

void square(int& a){
    cout<<&a<<endl;
}

int main(){

    int i = 5;

    square(i);
    cout<<&i<<endl;

    return 0;
}

*/

char user[] = "Ashish"; //This is a global variable and it can be accessed anywhere in the program

#define PI 3.14 //Macro = It changes the text with the value provided after that

int message(){
    cout<<"Hello Mr. "<<user<<endl;
}

//This is a inline function.
inline int square(int n){
    return n * n;
}

int main(){

    int r = 5;
    double area = PI * r * r;
    cout<<area<<endl;
    cout<<user<<endl;
    message();

    int sq = square(r);
    cout<<"square of "<<r<<" is "<<sq;

}