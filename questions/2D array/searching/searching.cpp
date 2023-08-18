#include<iostream>
using namespace std;

bool lin_search(int arr[][4],int target,int n, int m){
    for(int n=0; n<3; n++){
        for(int m=0; m<4; m++){
            if(arr[n][m]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the element to search : ";
    cin>>target;

    if(lin_search(arr,target,3,4)){
        cout<<endl<<"Element found";
    }
    else{
        cout<<endl<<"Element not found";
    }
}