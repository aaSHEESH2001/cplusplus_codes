#include<iostream>
using namespace std;

// void insertion_sort(int arr[], int n){
//     for(int i = 1; i < n; i++){
//         int temp = arr[i];
//         int j = i-1;
//         for(; j >= 0; j--){
//             if(temp < arr[j]){
//                 arr[j+1] = arr[j];  
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }

void insertion_sort_sec(int arr[], int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        for(int j = i-1; j >= 0; j--){
            if(arr[j+1] < arr[j]){
                arr[j+1] = arr[j];  
                arr[j] = temp;
            }
        }
    }
}


void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){

    int arr[] = {5,14,11,9,13,7,18};

    cout<<"Array before sorting: "<<endl;
    print_array(arr,7);
    insertion_sort_sec(arr,7);
    cout<<endl;
    cout<<"Array after sorting:"<<endl;
    print_array(arr,7);
    return 0;
}
