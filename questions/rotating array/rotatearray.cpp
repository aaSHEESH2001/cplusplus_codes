#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void rotate_array(vector<int> v, int k){
    int size = v.size();
    vector<int> temp(size);
    for(int i = 0; i < size; i++){
        temp[(i+k)%size] = v[i];
    }

    for(int k:temp){
        cout<<k<<" ";
    }cout<<endl;
}

int main(){

    vector<int> v = {9,11,1,7};

    int k = 2;

    rotate_array(v,k);
    
}