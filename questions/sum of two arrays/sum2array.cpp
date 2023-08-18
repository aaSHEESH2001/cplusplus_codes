//This is my method to solve this code 

#include<iostream>
#include<vector>
using namespace std;

vector<int> sum2array(vector<int> num1,vector<int> num2){

    int n1 = 0,n2 = 0;
    for(int i:num1){
        n1 = n1*10 + i;
    }
    for(int i:num2){
        n2 = n2*10 + i;
    }

    int sum = n1 + n2;
    cout<<sum<<endl;
    vector<int> num3;

    while(sum > 0){
        int rem = sum%10;
        cout<<rem<<endl;
        num3.push_back(rem);
        sum = sum/10;
        cout<<sum<<endl;
    }
    return num3;
}

int main(){

    vector<int> num1 = {1,2,3,4};
    vector<int> num2 = {6};

    vector<int> num3 = sum2array(num1,num2);

    for(int i:num3){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}