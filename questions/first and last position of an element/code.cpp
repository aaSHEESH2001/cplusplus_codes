#include<iostream>
#include<vector>
using namespace std;

void first_last_pos(vector<int>& arr, int size, int key){

    int start = 0;
    int end = size - 1;
    int occur = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(key == arr[mid]){
            occur = mid;
            break;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    //Worst approach because running two loopes and which taking n time 
    int firstoccur,lastoccur;
    if(occur == -1){
        cout<<"Element not present";
    }
    else{
        int i = occur-1;
        int j = occur+1;
        while(arr[i] == arr[occur] && i > 0){
            i--;
        }
        while(arr[j] == arr[occur] && j < size){
            j++;
        }
        firstoccur = i+1;
        lastoccur = j-1;
    }
    cout<<"First occurence : "<<firstoccur<<endl;
    cout<<"Last occurence : "<<lastoccur<<endl;
}

int main(){

    vector <int> arr = {0, 0, 1, 1, 2, 2, 2, 2};

    int key = 2;

    int size = arr.size();
    cout<<size<<endl;

    first_last_pos(arr,size,key);

    return 0;
}