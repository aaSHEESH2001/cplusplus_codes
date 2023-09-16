#include<iostream>
#include<vector>
using namespace std;

void solution(vector<int>nums, int index ,vector<int> output, vector<vector<int>>&ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return ;
    }

    solution(nums, index+1, output, ans);

    int element = nums[index];
    output.push_back(element);
    solution(nums, index+1, output, ans);
}

vector<vector <int>> subsets(vector<int> nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solution(nums, index, output, ans);
    return ans;
}

int main(){

    vector<int> nums = {1,2,3,4};

    vector<vector<int>> ans = subsets(nums);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}