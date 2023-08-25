#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int>arr1, int n, vector<int>arr2, int m){
    vector<int> ans;
	int p1 = 0;
	int p2 = 0;
	while(p1 != n && p2 != m){
		if(arr1[p1] == arr2[p2]){
			ans.push_back(arr1[p1]);
			p1++;
			p2++;
		}
		else if(arr1[p1] > arr2[p2]){
			p2++;
		}
		else{
			p1++;
		}
	}
	return ans;
}

int main(){
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans = findArrayIntersection(arr1,n,arr2,m);
    
    for(int i: ans){
        cout<<i<<" ";
    }
}