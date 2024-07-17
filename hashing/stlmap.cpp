#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[100];
    int num;
    for(int i = 0; i< 10; i++){
        cout<<"Enter a number : ";
        cin>>num;
        arr[i] = num;
    }

    map<int,int> mpp;
    for(int i=0; i<10;i++){
        mpp[arr[i]] +=1;
    }

    for(auto it: mpp){
        cout<<it.first << "->" <<it.second <<endl;
    }

    int q;
    cin>>q;
    while(q>0){
        int number;
        cin>>number;
        cout<<mpp[number] <<endl;
        q--;
    }
}