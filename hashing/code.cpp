#include<iostream>
using namespace std;



int main(){
    int arr[50];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[13] = {0};

    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;
    }

    int num;
    for(int i=0; i<5; i++){
        cout<<"Enter a number you want to find frequency of : ";
        cin>>num;
        cout<<endl;
        cout<<"Frequency of the number : "<<hash[num];
        cout<<endl;
    }
}