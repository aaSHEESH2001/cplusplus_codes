#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[0] <= arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main(){

    int arr[5] = {8,10,17,1,3};
    cout<<"Pivot is : "<<getPivot(arr,5)<<endl;

}