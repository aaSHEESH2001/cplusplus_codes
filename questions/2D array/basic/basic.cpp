#include<iostream>
using namespace std;

int main(){
    int arr[3][4]; //declaration of a two dimension array
    
    // //Taking input from user
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // //Printing of 2D array
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr2[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //declaration and initialisation in the same line

    //Printing of 2D array
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    } 
}
