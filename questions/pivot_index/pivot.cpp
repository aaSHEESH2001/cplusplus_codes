#include<iostream>
#include<vector>
using namespace std;

int pivot_index(vector<int> arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    int half = sum/2;
    cout<<half;

}

int main(){

    vector<int> arr = {1,7,3,6,5,6};

    int size = arr.size();

    int ans = pivot_index(arr,size);

    return 0;
}