#include<iostream>
#include<vector>
using namespace std;

void move_zeroes(vector<int> nums){
    int nonZero = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[nonZero],nums[i]);
            nonZero++;
        }
    }
    for(int k : nums){
        cout<<k<<" ";
    }cout<<endl;

}

/*

void move_zeroes(vector<int> nums){
    int i = 0;
    int j = 1;
    while(j < nums.size()){
        if(nums[i] == 0){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        else{
            i++;
            j++;
        }
    }

    for(int k : nums){
        cout<<k<<" ";
    }cout<<endl;

}


*/

int main(){

    vector<int> nums = {0,0,1,3,12};

    move_zeroes(nums);

    return 0;
}