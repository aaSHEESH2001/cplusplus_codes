#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5,6,7,8,9,10,1,2,3,4};
    // arr.push_back(5);
    // vector<vector<int>> result;
    // result.push_back({5,7});
    // for(int i = 0; i<result.size(); i++){
    //     for(int j=0; j<result[i].size();j++){
    //         cout<<result[i][j];
    //     }
    // }
    arr.pop_back();
    arr.erase(4);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
}