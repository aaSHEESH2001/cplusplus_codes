#include<iostream>
#include<vector>
using namespace std;

void merge_sort(vector<int>nums1,vector<int>nums2,int m, int n){
    vector<int> nums3(m+n);
    int i = 0, j = 0;
    
    while(i<m && j<n){
        if(nums1[i] == nums2[j]){
            nums3[i+j] = nums2[j];
            j++;
            nums3[i+j] = nums1[i];
            i++;
        }
        else if(nums1[i] < nums2[j]){
            nums3[i+j] = nums1[i];
            i++;
        }
        else{
            nums3[i+j] = nums2[j];
            j++;
        }
    }
    while(i < m){
        nums3[i+j] = nums1[i];
        i++;
    }
    while(j<n){
        nums3[i+j] = nums2[j];
        j++;
    }
    for(int k: nums3){
        cout<<k<<" ";
    }cout<<endl;

}

int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,5,6};

    int m = nums1.size();
    int n = nums2.size();

    merge_sort(nums1,nums2,m,n);

}
