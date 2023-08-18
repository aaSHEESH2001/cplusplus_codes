#include<iostream>
using namespace std;

int main(){    
/*

    //In this case the integer is creating inside the heap memory but the pointer is creating inside the stack memory
    int* ptr = new int;

    *ptr = 50;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int** p = &ptr; //and pointer p is also creating inside the stack memory

    **p = 100;
    cout<<p<<endl;
    cout<<&ptr<<endl;
    cout<<*p<<endl;
    cout<<**p<<endl;

    //But when we use the below code the pointer is creating inside the heap and the double pointer is creating inside the stack.

    int** p1 = new int*;
    int* ptr1 = new int;
    *p1 = ptr1;

    **p1 = 200;

    cout<<ptr1<<endl;
    cout<<p1<<endl; //As you can see p1 is pointer to a different memory location in heap memery so it doesnt show the same result as &ptr1
    cout<<&ptr1<<endl;
    cout<<*p1<<endl;
    cout<<*ptr1<<endl;
    cout<<**p1<<endl;

*/

//2-D array dynamic allocation 

    int row,col;
    cin>>row>>col;

    //(Double pointer) pointing to the array of (pointers to integer)
    int** arr = new int* [row];

    //Creating 2-D array
    for(int i = 0; i<row; i++){
        arr[i] = new int [col];
    }

    //Initialising values
    for(int i = 0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //Printing 2-D array
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}