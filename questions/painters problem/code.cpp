#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> & boards, int n, int k, int mid){
    int painterCount = 1;
    int paintedPortion = 0;
    for(int i = 0; i < n; i++){
        if(paintedPortion + boards[i] <= mid){
            paintedPortion += boards[i];
        }
        else{
            painterCount++;
            if(painterCount > k || boards[i] > mid){
                return false;
            }
            paintedPortion = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> & boards, int k){
    int size = boards.size();
    int s = 0;
    int sum = 0; 
    for(int i = 0; i < size; i++){
        sum = sum + boards[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(boards,size,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    vector<int> boards = {10,20,30,40};

    int k = 2;

    int res = findLargestMinDistance(boards,k);

    if(res == -1){
        cout<<"The task cannot be done";
    }
    else{
        cout<<"The minimum time required to complete the boards is : "<<res;
    }
}