#include<iostream>
#include<vector>
using namespace std;

void s_and_r(vector<int> nums){

    int count = 0;
    int n = nums.size();
    for(int i = 1; i < n; i++){
        if(nums[i-1] > nums[i]){
            count++;
        }
    }
    if(nums[n-1] > nums[0]){
        count++;
    }
    
    if(count <= 1){
        cout<<"True";
    }
    else{
        cout<<"False0";
    }
}

int main(){

    vector<int> nums = {3,4,5,1,2};

    s_and_r(nums);

    return 0;
}