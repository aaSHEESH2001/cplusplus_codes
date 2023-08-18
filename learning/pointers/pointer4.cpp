#include<iostream>
using namespace std;

int main(){

    int B[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //cout<<B<<endl;

/*
    cout<<B[0]<<endl;
    cout<<B[1]<<endl;
    cout<<B[2]<<endl;

    cout<<endl;
    cout<<"Alternative method : "<<endl;
    cout<<B+0<<endl;
    cout<<B+1<<endl;
    cout<<B+2<<endl;

    cout<<endl<<endl<<endl;
    cout<<"Getting address of particular element of first 1-D array"<<endl;
    cout<<B[0] + 0<<endl;
    cout<<B[0] + 1<<endl;
    cout<<B[0] + 2<<endl;

    cout<<"Getting address of particular element of second 1-D array"<<endl;
    cout<<B[1] + 0<<endl;   // *(B+1) + 0 == &B[1][0]
    cout<<B[1] + 1<<endl;   // *(B+1) + 1 == &B[1][1]
    cout<<B[1] + 2<<endl;   // *(B+1) + 2 == &B[1][2]

    cout<<"Getting address of particular element of third 1-D array"<<endl;
    cout<<B[2] + 0<<endl;
    cout<<B[2] + 1<<endl;
    cout<<B[2] + 2<<endl;

    cout<<"Elements Address alternate method"<<endl;
    cout<<&B[0][0]<<endl;
    cout<<&B[0][1]<<endl;
    cout<<&B[0][2]<<endl;

    cout<<"Value at B"<<endl;
    cout<<**(B)<<endl;
    cout<<**(B+1)<<endl;
    cout<<**(B+2)<<endl;

*/

    //cout<<*B<<endl;
    cout<<*(B+1)<<endl;  //B[1] == *(B+1) == &B[1][0] 
    cout<<B[1]<<endl;
    cout<<B+1<<endl;
    cout<<&B[1][0]<<endl;
    return 0;
}